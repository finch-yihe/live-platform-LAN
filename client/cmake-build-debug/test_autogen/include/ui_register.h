/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_22;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *warning_label;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLineEdit *ui_name;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QLineEdit *ui_password;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_5;
    QLineEdit *ui_rpassword;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_2;
    QLineEdit *ui_real_name;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_3;
    QLineEdit *ui_id;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_4;
    QLineEdit *ui_mail;
    QSpacerItem *horizontalSpacer_19;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *ui_organization;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_register;
    QPushButton *ui_back;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_23;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(338, 472);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font.setPointSize(12);
        Register->setFont(font);
        Register->setStyleSheet(QString::fromUtf8("	color: rgb(86, 118, 162);"));
        verticalLayout_5 = new QVBoxLayout(Register);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_22);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        label_9 = new QLabel(Register);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 100));
        label_9->setMaximumSize(QSize(100, 100));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/png/ui_login.png")));
        label_9->setScaledContents(true);

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        warning_label = new QLabel(Register);
        warning_label->setObjectName(QString::fromUtf8("warning_label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font1.setPointSize(11);
        warning_label->setFont(font1);
        warning_label->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);\n"
"background-color: rgb(186, 189, 182);"));
        warning_label->setAlignment(Qt::AlignCenter);
        warning_label->setWordWrap(true);

        verticalLayout_2->addWidget(warning_label);

        line_3 = new QFrame(Register);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        ui_name = new QLineEdit(Register);
        ui_name->setObjectName(QString::fromUtf8("ui_name"));
        ui_name->setMinimumSize(QSize(200, 25));
        ui_name->setMaximumSize(QSize(200, 25));
        ui_name->setFont(font);
        ui_name->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_name->setMaxLength(15);
        ui_name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ui_name);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(Register);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        label_6 = new QLabel(Register);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_6);

        ui_password = new QLineEdit(Register);
        ui_password->setObjectName(QString::fromUtf8("ui_password"));
        ui_password->setMinimumSize(QSize(200, 25));
        ui_password->setMaximumSize(QSize(200, 25));
        ui_password->setFont(font);
        ui_password->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_password->setMaxLength(15);
        ui_password->setEchoMode(QLineEdit::Password);
        ui_password->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(ui_password);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        label_5 = new QLabel(Register);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_5);

        ui_rpassword = new QLineEdit(Register);
        ui_rpassword->setObjectName(QString::fromUtf8("ui_rpassword"));
        ui_rpassword->setMinimumSize(QSize(200, 25));
        ui_rpassword->setMaximumSize(QSize(200, 25));
        ui_rpassword->setFont(font);
        ui_rpassword->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_rpassword->setMaxLength(15);
        ui_rpassword->setEchoMode(QLineEdit::Password);
        ui_rpassword->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(ui_rpassword);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(Register);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_13 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(label_2);

        ui_real_name = new QLineEdit(Register);
        ui_real_name->setObjectName(QString::fromUtf8("ui_real_name"));
        ui_real_name->setMinimumSize(QSize(200, 25));
        ui_real_name->setMaximumSize(QSize(200, 25));
        ui_real_name->setFont(font);
        ui_real_name->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_real_name->setMaxLength(20);
        ui_real_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ui_real_name);

        horizontalSpacer_12 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_20 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);

        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(label_3);

        ui_id = new QLineEdit(Register);
        ui_id->setObjectName(QString::fromUtf8("ui_id"));
        ui_id->setMinimumSize(QSize(200, 25));
        ui_id->setMaximumSize(QSize(200, 25));
        ui_id->setFont(font);
        ui_id->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_id->setMaxLength(18);
        ui_id->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ui_id);

        horizontalSpacer_18 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_21 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);

        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(label_4);

        ui_mail = new QLineEdit(Register);
        ui_mail->setObjectName(QString::fromUtf8("ui_mail"));
        ui_mail->setMinimumSize(QSize(200, 25));
        ui_mail->setMaximumSize(QSize(200, 25));
        ui_mail->setFont(font);
        ui_mail->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_mail->setMaxLength(50);
        ui_mail->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(ui_mail);

        horizontalSpacer_19 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_7);

        line_4 = new QFrame(Register);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_16 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        label_8 = new QLabel(Register);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        ui_organization = new QLineEdit(Register);
        ui_organization->setObjectName(QString::fromUtf8("ui_organization"));
        ui_organization->setMinimumSize(QSize(200, 25));
        ui_organization->setMaximumSize(QSize(200, 25));
        ui_organization->setFont(font);
        ui_organization->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));
        ui_organization->setMaxLength(50);
        ui_organization->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(ui_organization);


        verticalLayout->addLayout(horizontalLayout_8);

        line_5 = new QFrame(Register);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        ui_register = new QPushButton(Register);
        ui_register->setObjectName(QString::fromUtf8("ui_register"));
        ui_register->setMinimumSize(QSize(80, 30));
        ui_register->setMaximumSize(QSize(80, 30));
        ui_register->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_9->addWidget(ui_register);

        ui_back = new QPushButton(Register);
        ui_back->setObjectName(QString::fromUtf8("ui_back"));
        ui_back->setMinimumSize(QSize(80, 30));
        ui_back->setMaximumSize(QSize(80, 30));
        ui_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_9->addWidget(ui_back);


        verticalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_11->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_11);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_12->addLayout(verticalLayout_4);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_23);


        verticalLayout_5->addLayout(horizontalLayout_12);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "\346\210\221\347\232\204\344\270\226\347\225\214---\346\263\250\345\206\214", nullptr));
        label_9->setText(QString());
        warning_label->setText(QString());
        label->setText(QCoreApplication::translate("Register", "\346\230\265    \347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("Register", "\345\257\206    \347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "\347\234\237\345\256\236\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "\347\224\265\345\255\220\351\202\256\347\256\261", nullptr));
        label_8->setText(QCoreApplication::translate("Register", "\345\255\246\346\240\241\347\273\204\347\273\207", nullptr));
        ui_register->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        ui_back->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
