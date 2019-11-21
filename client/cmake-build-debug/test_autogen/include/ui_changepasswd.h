/********************************************************************************
** Form generated from reading UI file 'changepasswd.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWD_H
#define UI_CHANGEPASSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_changepasswd
{
public:
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *mail_editor;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *code_editor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *passwd_editor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *repasswd_editor;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *changepasswd)
    {
        if (changepasswd->objectName().isEmpty())
            changepasswd->setObjectName(QString::fromUtf8("changepasswd"));
        changepasswd->resize(362, 217);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font.setPointSize(12);
        changepasswd->setFont(font);
        changepasswd->setStyleSheet(QString::fromUtf8("	color: rgb(86, 118, 162);"));
        horizontalLayout_6 = new QHBoxLayout(changepasswd);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(changepasswd);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mail_editor = new QLineEdit(changepasswd);
        mail_editor->setObjectName(QString::fromUtf8("mail_editor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(25);
        sizePolicy.setHeightForWidth(mail_editor->sizePolicy().hasHeightForWidth());
        mail_editor->setSizePolicy(sizePolicy);
        mail_editor->setMinimumSize(QSize(200, 25));
        QFont font1;
        font1.setPointSize(12);
        mail_editor->setFont(font1);
        mail_editor->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        mail_editor->setMaxLength(50);
        mail_editor->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(mail_editor);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(changepasswd);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        code_editor = new QLineEdit(changepasswd);
        code_editor->setObjectName(QString::fromUtf8("code_editor"));
        code_editor->setMinimumSize(QSize(200, 25));
        code_editor->setMaximumSize(QSize(200, 25));
        code_editor->setFont(font1);
        code_editor->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        code_editor->setMaxLength(4);
        code_editor->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(code_editor);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(changepasswd);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        passwd_editor = new QLineEdit(changepasswd);
        passwd_editor->setObjectName(QString::fromUtf8("passwd_editor"));
        sizePolicy.setHeightForWidth(passwd_editor->sizePolicy().hasHeightForWidth());
        passwd_editor->setSizePolicy(sizePolicy);
        passwd_editor->setMinimumSize(QSize(200, 25));
        passwd_editor->setFont(font1);
        passwd_editor->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        passwd_editor->setMaxLength(50);
        passwd_editor->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(passwd_editor);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(changepasswd);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        repasswd_editor = new QLineEdit(changepasswd);
        repasswd_editor->setObjectName(QString::fromUtf8("repasswd_editor"));
        sizePolicy.setHeightForWidth(repasswd_editor->sizePolicy().hasHeightForWidth());
        repasswd_editor->setSizePolicy(sizePolicy);
        repasswd_editor->setMinimumSize(QSize(200, 25));
        repasswd_editor->setFont(font1);
        repasswd_editor->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        repasswd_editor->setMaxLength(50);
        repasswd_editor->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(repasswd_editor);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(changepasswd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 30));
        pushButton->setMaximumSize(QSize(80, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(149, 187, 209, 255), stop:1 rgba(218, 238, 249, 255));\n"
"    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color:rgb(86, 118, 162);\n"
"    }\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(17, 100, 162, 255), stop:1 rgba(61, 140, 201, 255));\n"
"    border-style: inset;\n"
"    border-radius: 8px;\n"
"	color:white;\n"
"    }"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        retranslateUi(changepasswd);

        QMetaObject::connectSlotsByName(changepasswd);
    } // setupUi

    void retranslateUi(QDialog *changepasswd)
    {
        changepasswd->setWindowTitle(QCoreApplication::translate("changepasswd", "\351\207\215\347\275\256\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("changepasswd", "\351\202\256        \347\256\261", nullptr));
        label_2->setText(QCoreApplication::translate("changepasswd", "\351\252\214  \350\257\201  \347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("changepasswd", "\345\257\206        \347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("changepasswd", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("changepasswd", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepasswd: public Ui_changepasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWD_H
