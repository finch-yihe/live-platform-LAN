/********************************************************************************
** Form generated from reading UI file 'sign_in.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_H
#define UI_SIGN_IN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_in
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ui_account;
    QPushButton *ui_register_account;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ui_password;
    QPushButton *ui_forget_password;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *ui_save_password;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ui_sign_in;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Sign_in)
    {
        if (Sign_in->objectName().isEmpty())
            Sign_in->setObjectName(QString::fromUtf8("Sign_in"));
        Sign_in->resize(518, 232);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/ui_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Sign_in->setWindowIcon(icon);
        Sign_in->setStyleSheet(QString::fromUtf8("color: rgb(86, 118, 162);"));
        verticalLayout_3 = new QVBoxLayout(Sign_in);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_3 = new QLabel(Sign_in);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(200, 200));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/png/ui_login.png")));
        label_3->setScaledContents(true);

        horizontalLayout_4->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Sign_in);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        ui_account = new QLineEdit(Sign_in);
        ui_account->setObjectName(QString::fromUtf8("ui_account"));
        ui_account->setMinimumSize(QSize(150, 12));
        ui_account->setFont(font);
        ui_account->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_account->setMaxLength(15);
        ui_account->setAlignment(Qt::AlignCenter);
        ui_account->setCursorMoveStyle(Qt::LogicalMoveStyle);

        horizontalLayout->addWidget(ui_account);

        ui_register_account = new QPushButton(Sign_in);
        ui_register_account->setObjectName(QString::fromUtf8("ui_register_account"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font1.setPointSize(12);
        font1.setUnderline(true);
        ui_register_account->setFont(font1);
        ui_register_account->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(138, 226, 52);\n"
"    }\n"
"QPushButton:hover {\n"
"	color: rgb(115, 210, 22);\n"
"    }\n"
"QPushButton:pressed {\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	color: rgb(86, 118, 162);\n"
"    }\n"
""));
        ui_register_account->setFlat(true);

        horizontalLayout->addWidget(ui_register_account);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Sign_in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_2);

        ui_password = new QLineEdit(Sign_in);
        ui_password->setObjectName(QString::fromUtf8("ui_password"));
        ui_password->setMinimumSize(QSize(150, 12));
        ui_password->setFont(font);
        ui_password->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_password->setMaxLength(15);
        ui_password->setEchoMode(QLineEdit::Password);
        ui_password->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(ui_password);

        ui_forget_password = new QPushButton(Sign_in);
        ui_forget_password->setObjectName(QString::fromUtf8("ui_forget_password"));
        ui_forget_password->setFont(font1);
        ui_forget_password->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(138, 226, 52);\n"
"    }\n"
"QPushButton:hover {\n"
"	color: rgb(115, 210, 22);\n"
"    }\n"
"QPushButton:pressed {\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	color: rgb(86, 118, 162);\n"
"    }"));
        ui_forget_password->setFlat(true);

        horizontalLayout_2->addWidget(ui_forget_password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        ui_save_password = new QCheckBox(Sign_in);
        ui_save_password->setObjectName(QString::fromUtf8("ui_save_password"));
        ui_save_password->setFont(font1);
        ui_save_password->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        horizontalLayout_3->addWidget(ui_save_password);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        ui_sign_in = new QPushButton(Sign_in);
        ui_sign_in->setObjectName(QString::fromUtf8("ui_sign_in"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font2.setPointSize(14);
        ui_sign_in->setFont(font2);
        ui_sign_in->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(ui_sign_in);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        retranslateUi(Sign_in);

        QMetaObject::connectSlotsByName(Sign_in);
    } // setupUi

    void retranslateUi(QWidget *Sign_in)
    {
        Sign_in->setWindowTitle(QCoreApplication::translate("Sign_in", "\346\210\221\347\232\204\344\270\226\347\225\214---\347\231\273\345\275\225", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Sign_in", "\350\264\246\345\217\267", nullptr));
        ui_register_account->setText(QCoreApplication::translate("Sign_in", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Sign_in", "\345\257\206\347\240\201", nullptr));
        ui_forget_password->setText(QCoreApplication::translate("Sign_in", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        ui_save_password->setText(QCoreApplication::translate("Sign_in", "\350\256\260\344\275\217\350\264\246\345\217\267", nullptr));
        ui_sign_in->setText(QCoreApplication::translate("Sign_in", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_in: public Ui_Sign_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_H
