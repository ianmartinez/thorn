#ifndef MARKUP_HIGHLIGHTER_H
#define MARKUP_HIGHLIGHTER_H

/* A syntax highlighter for the HTML-based markup language
 *  used by Thorn. */

#include <QSyntaxHighlighter>
#include <QPlainTextEdit>
#include "../code_editor.h"

class MarkupHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT
public:
    MarkupHighlighter(QObject* parent);
    MarkupHighlighter(QTextDocument* parent);
    MarkupHighlighter(QTextEdit* parent);

protected:
    virtual void highlightBlock(const QString& text);

private:
    void highlightByRegex(const QTextCharFormat & format, QString regex_pattern, const QString & text);
    void setRegexes();
    void setFormats();

private:
    QTextCharFormat m_markupKeywordFormat;
    QTextCharFormat m_markupElementFormat;
    QTextCharFormat m_markupAttributeFormat;
    QTextCharFormat m_markupValueFormat;
    QTextCharFormat m_markupCommentFormat;
    QTextCharFormat m_markupResourceFormat;

    QList<QString> m_markupKeywordRegexes;
    QString m_markupElementRegex;
    QString m_markupAttributeRegex;
    QString m_markupValueRegex;
    QString m_markupCommentStartRegex;
    QString m_markupCommentEndRegex;
    QString m_markupResourceRegex;
};

#endif
