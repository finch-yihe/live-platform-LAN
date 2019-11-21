#include "markdown_highlighter.h"
markdown_highlighter::markdown_highlighter(QTextEdit *parent)
	: QSyntaxHighlighter(parent) {
	highlightingRules.clear();
}

void markdown_highlighter::highlightBlock(const QString &text) {
		foreach (HighlightingRule rule, highlightingRules) {
			QRegExp expression(rule.pattern);
			int index = text.indexOf(expression);
			while (index >= 0) {
				int length = expression.matchedLength();
				setFormat(index, length, rule.format);
				index = text.indexOf(expression, index + length);
			}
		}
}

void markdown_highlighter::SetColorText(const QString &str, const QColor &color) {
	HighlightingRule rule;
	rule.pattern = QRegExp(str);
	QTextCharFormat format;
	format.setForeground(color);
	rule.format = format;
	highlightingRules.append(rule);
}

void markdown_highlighter::clearRules() {
	highlightingRules.clear();
}
