#include "MarkupHighlighter.h"
#include <QRegularExpressionMatchIterator>

MarkupHighlighter::MarkupHighlighter(QObject* parent) : QSyntaxHighlighter(parent)
{
    setRegexes();
    setFormats();
}

MarkupHighlighter::MarkupHighlighter(QTextDocument* parent) : QSyntaxHighlighter(parent)
{
    setRegexes();
    setFormats();
}

MarkupHighlighter::MarkupHighlighter(QTextEdit* parent) : QSyntaxHighlighter(parent)
{
    setRegexes();
    setFormats();
}

void MarkupHighlighter::highlightBlock(const QString& text)
{
    // Special treatment for markup element regex as we use captured text to emulate lookbehind
    QRegularExpression element_regex(m_markupElementRegex, QRegularExpression::DotMatchesEverythingOption);
    QRegularExpressionMatchIterator element_iter = element_regex.globalMatch(text);
    while (element_iter.hasNext()) {
        QRegularExpressionMatch match = element_iter.next();

        if (match.hasMatch()) {
            setFormat(match.capturedStart(0), match.capturedLength(0), m_markupElementFormat);
        }
    }

    // Highlight markup keywords *after* markup elements to fix any occasional / captured into the enclosing element
    typedef QList<QString>::const_iterator Iter;
    Iter markupKeywordRegexesEnd = m_markupKeywordRegexes.end();
    for(Iter it = m_markupKeywordRegexes.begin(); it != markupKeywordRegexesEnd; ++it) {
        QString regex = QString(*it);
        highlightByRegex(m_markupKeywordFormat, regex, text);
    }

    highlightByRegex(m_markupAttributeFormat, m_markupAttributeRegex, text);
    highlightByRegex(m_markupValueFormat, m_markupValueRegex, text);
    highlightByRegex(m_markupResourceFormat, m_markupResourceRegex, text);


    /* Comments can span multiple blocks and that requires some work-arounds
       to highlight them the same as single-line comments */
    QRegExp start_expression(m_markupCommentStartRegex);
    QRegExp end_expression(m_markupCommentEndRegex);

    setCurrentBlockState(0);

    int startIndex = 0;
    if (previousBlockState() != 1)
        startIndex = text.indexOf(start_expression);

    while (startIndex >= 0) {
       int endIndex = text.indexOf(end_expression, startIndex);
       int commentLength;
       if (endIndex == -1) {
           setCurrentBlockState(1);
           commentLength = text.length() - startIndex;
       } else {
           commentLength = endIndex - startIndex
                           + end_expression.matchedLength();
       }
       setFormat(startIndex, commentLength, m_markupCommentFormat);
       startIndex = text.indexOf(start_expression,
                                 startIndex + commentLength);
    }
}

void MarkupHighlighter::highlightByRegex(const QTextCharFormat& format, QString regex_pattern, const QString& text)
{
    QRegularExpression regex(regex_pattern);

    QRegularExpressionMatchIterator element_iter = regex.globalMatch(text);

    while (element_iter.hasNext()) {
        QRegularExpressionMatch match = element_iter.next();
        if (match.hasMatch()) {
            setFormat(match.capturedStart(), match.capturedLength(), format);
        }
    }
}

void MarkupHighlighter::setRegexes()
{
    m_markupElementRegex = "<[\\s]*[/]?[\\s]*([^\\n]\\w*)(?=[\\s/>])";
    m_markupAttributeRegex = "\\w+(?=\\=)";
    m_markupValueRegex = "\"[^\\n\"@]+\"(?=[\\s/>])";
    m_markupCommentStartRegex = "<!--*";
    m_markupCommentEndRegex = "-->";
    m_markupResourceRegex = "(\"@.*\")"; // Thorn extension
    m_markupKeywordRegexes = QList<QString>() << QString("<\\?") << QString("/>")
                                           << QString(">") << QString("<") << QString("</")
                                           << QString("\\?>");
}

void MarkupHighlighter::setFormats()
{
    m_markupKeywordFormat.setForeground(QColor(94,118,142));
    m_markupKeywordFormat.setFontWeight(QFont::Bold);

    m_markupElementFormat.setForeground(QColor(75,74,158));
    m_markupElementFormat.setFontWeight(QFont::Bold);

    m_markupAttributeFormat.setForeground(QColor(207,82,48));
    m_markupAttributeFormat.setFontWeight(QFont::Bold);

    m_markupValueFormat.setForeground(QColor(226,122,61));

    m_markupCommentFormat.setForeground(QColor(100,133,137));
    m_markupCommentFormat.setFontItalic(true);

    m_markupResourceFormat.setForeground(QColor(30,127,47));
    m_markupResourceFormat.setFontItalic(true);
    m_markupResourceFormat.setFontWeight(QFont::Bold);
}
