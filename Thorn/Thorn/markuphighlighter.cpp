#include "markuphighlighter.h"

MarkupHighlighter::MarkupHighlighter(QObject * parent) :
    QSyntaxHighlighter(parent)
{
    setRegexes();
    setFormats();
}

MarkupHighlighter::MarkupHighlighter(QTextDocument * parent) :
    QSyntaxHighlighter(parent)
{
    setRegexes();
    setFormats();
}

MarkupHighlighter::MarkupHighlighter(QTextEdit * parent) :
    QSyntaxHighlighter(parent)
{
    setRegexes();
    setFormats();
}

void MarkupHighlighter::highlightBlock(const QString & text)
{
    // Special treatment for markup element regex as we use captured text to emulate lookbehind
    int markupElementIndex = m_markupElementRegex.indexIn(text);
    while(markupElementIndex >= 0)
    {
        int matchedPos = m_markupElementRegex.pos(1);
        int matchedLength = m_markupElementRegex.cap(1).length();
        setFormat(matchedPos, matchedLength, m_markupElementFormat);

        markupElementIndex = m_markupElementRegex.indexIn(text, matchedPos + matchedLength);
    }

    // Highlight markup keywords *after* markup elements to fix any occasional / captured into the enclosing element
    typedef QList<QRegExp>::const_iterator Iter;
    Iter markupKeywordRegexesEnd = m_markupKeywordRegexes.end();
    for(Iter it = m_markupKeywordRegexes.begin(); it != markupKeywordRegexesEnd; ++it) {
        const QRegExp & regex = *it;
        highlightByRegex(m_markupKeywordFormat, regex, text);
    }

    highlightByRegex(m_markupAttributeFormat, m_markupAttributeRegex, text);
    highlightByRegex(m_markupCommentFormat, m_markupCommentRegex, text);
    highlightByRegex(m_markupValueFormat, m_markupValueRegex, text);
    highlightByRegex(m_markupResourceFormat, m_markupResourceRegex, text);
}

void MarkupHighlighter::highlightByRegex(const QTextCharFormat & format,
                                                 const QRegExp & regex, const QString & text)
{
    int index = regex.indexIn(text);

    while(index >= 0)
    {
        int matchedLength = regex.matchedLength();
        setFormat(index, matchedLength, format);

        index = regex.indexIn(text, index + matchedLength);
    }
}

void MarkupHighlighter::setRegexes()
{
    m_markupElementRegex.setPattern("<[\\s]*[/]?[\\s]*([^\\n]\\w*)(?=[\\s/>])");
    m_markupAttributeRegex.setPattern("\\w+(?=\\=)");
    m_markupValueRegex.setPattern("\"[^\\n\"@]+\"(?=[\\s/>])");
    m_markupCommentRegex.setPattern("<!--[^\\n]*-->");
    m_markupResourceRegex.setPattern("(\"@.*\")"); // Thorn extension

    m_markupKeywordRegexes = QList<QRegExp>() << QRegExp("<\\?") << QRegExp("/>")
                                           << QRegExp(">") << QRegExp("<") << QRegExp("</")
                                           << QRegExp("\\?>");
}

void MarkupHighlighter::setFormats()
{
    m_markupKeywordFormat.setForeground(QColor(110,53,44));
    m_markupKeywordFormat.setFontWeight(QFont::Bold);

    m_markupElementFormat.setForeground(Qt::darkMagenta);
    m_markupElementFormat.setFontWeight(QFont::Bold);

    m_markupAttributeFormat.setForeground(QColor(207,82,48));
    m_markupAttributeFormat.setFontWeight(QFont::Bold);
   // m_markupAttributeFormat.setFontItalic(true);

    m_markupValueFormat.setForeground(QColor(205,124,68));

    m_markupCommentFormat.setForeground(QColor(227,197,152));

    m_markupResourceFormat.setForeground(QColor(110,97,47));
    m_markupResourceFormat.setFontItalic(true);
}
