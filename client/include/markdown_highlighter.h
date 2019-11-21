#ifndef TEST__MARKDOWN_HIGHLIGHTER_H_
#define TEST__MARKDOWN_HIGHLIGHTER_H_

#include <QSyntaxHighlighter>
#include <qtextedit.h>
#include <qtextdocument.h>
#include <QTextCharFormat>
#include <qtextcursor.h>
#include <qhash.h>
#include <qvector.h>
#include <qregexp.h>
#include <qcolor.h>
#include <qstring.h>

class markdown_highlighter : public QSyntaxHighlighter {
public:
	explicit markdown_highlighter(QTextEdit *parent = 0);
	void highlightBlock(const QString &text) override;
	void SetColorText(const QString &str, const QColor &color);
	void clearRules();
private:
	struct HighlightingRule {
		QRegExp pattern;
		QTextCharFormat format;
		bool operator==(const struct HighlightingRule &other) {
			return this->pattern == other.pattern;
		}
	};
	QVector<HighlightingRule> highlightingRules;
};

#endif //TEST__MARKDOWN_HIGHLIGHTER_H_
