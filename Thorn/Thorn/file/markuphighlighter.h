#ifndef MARKUP_HIGHLIGHTER_H
#define MARKUP_HIGHLIGHTER_H

/* A syntax highlighter for the HTML-based markup language
 *  used by Thorn. */

#include <QSyntaxHighlighter>
#include <QTextEdit>

class MarkupHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT
public:
    MarkupHighlighter(QObject * parent);
    MarkupHighlighter(QTextDocument * parent);
    MarkupHighlighter(QTextEdit * parent);

protected:
    virtual void highlightBlock(const QString & text);

private:
    void highlightByRegex(const QTextCharFormat & format,
                          const QRegExp & regex, const QString & text);

    void setRegexes();
    void setFormats();

private:
    QTextCharFormat     m_markupKeywordFormat;
    QTextCharFormat     m_markupElementFormat;
    QTextCharFormat     m_markupAttributeFormat;
    QTextCharFormat     m_markupValueFormat;
    QTextCharFormat     m_markupCommentFormat;
    QTextCharFormat     m_markupResourceFormat;

    QList<QRegExp>      m_markupKeywordRegexes;
    QRegExp             m_markupElementRegex;
    QRegExp             m_markupAttributeRegex;
    QRegExp             m_markupValueRegex;
    QRegExp             m_markupCommentRegex;
    QRegExp             m_markupResourceRegex;
};

#endif
