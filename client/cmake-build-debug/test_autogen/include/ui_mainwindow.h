/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *world_list;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QListWidget *room_list;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QListWidget *member_list;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_14;
    QFrame *line;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *integral;
    QSpacerItem *horizontalSpacer_12;
    QLabel *title;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *top_up;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *create_room;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *back;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_15;
    QLabel *screen_widget;
    QWidget *tip_widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *show_video;
    QRadioButton *show_screen;
    QCheckBox *barrage;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *ui_rocket;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_flower;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ui_horse;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *ui_like;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *chat_room;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *send_data;
    QFrame *line_3;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1214, 656);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/ui_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("	color: rgb(86, 118, 162);\n"
""));
        verticalLayout_5 = new QVBoxLayout(MainWindow);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        line_4 = new QFrame(MainWindow);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 2);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        world_list = new QTabWidget(MainWindow);
        world_list->setObjectName(QString::fromUtf8("world_list"));
        world_list->setMinimumSize(QSize(170, 0));
        world_list->setMaximumSize(QSize(170, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font1.setPointSize(11);
        world_list->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        room_list = new QListWidget(tab);
        room_list->setObjectName(QString::fromUtf8("room_list"));
        room_list->setMinimumSize(QSize(165, 0));
        room_list->setMaximumSize(QSize(165, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font2.setPointSize(18);
        room_list->setFont(font2);
        room_list->setResizeMode(QListView::Adjust);

        verticalLayout_4->addWidget(room_list);

        world_list->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        member_list = new QListWidget(tab_2);
        member_list->setObjectName(QString::fromUtf8("member_list"));
        member_list->setMinimumSize(QSize(165, 0));
        member_list->setMaximumSize(QSize(165, 16777215));
        member_list->setFont(font2);

        verticalLayout_3->addWidget(member_list);

        world_list->addTab(tab_2, QString());

        verticalLayout_2->addWidget(world_list);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_14 = new QLabel(MainWindow);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 30));
        label_14->setMaximumSize(QSize(0, 30));

        verticalLayout_16->addWidget(label_14);

        line = new QFrame(MainWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(1, 0));
        line->setMaximumSize(QSize(1, 16777215));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);

        verticalLayout_16->addWidget(line);


        horizontalLayout->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(4);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        integral = new QLabel(MainWindow);
        integral->setObjectName(QString::fromUtf8("integral"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font3.setPointSize(14);
        integral->setFont(font3);

        horizontalLayout_4->addWidget(integral);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        title = new QLabel(MainWindow);
        title->setObjectName(QString::fromUtf8("title"));
        title->setFont(font3);

        horizontalLayout_4->addWidget(title);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        top_up = new QPushButton(MainWindow);
        top_up->setObjectName(QString::fromUtf8("top_up"));
        top_up->setMinimumSize(QSize(80, 25));
        top_up->setMaximumSize(QSize(80, 25));
        top_up->setFont(font);
        top_up->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(top_up);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        create_room = new QPushButton(MainWindow);
        create_room->setObjectName(QString::fromUtf8("create_room"));
        create_room->setMinimumSize(QSize(80, 25));
        create_room->setMaximumSize(QSize(80, 25));
        create_room->setFont(font);
        create_room->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(create_room);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        back = new QPushButton(MainWindow);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(80, 25));
        back->setMaximumSize(QSize(80, 25));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(back);


        verticalLayout_17->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        screen_widget = new QLabel(MainWindow);
        screen_widget->setObjectName(QString::fromUtf8("screen_widget"));
        screen_widget->setMinimumSize(QSize(700, 500));
        QFont font4;
        font4.setPointSize(25);
        screen_widget->setFont(font4);
        screen_widget->setStyleSheet(QString::fromUtf8("color: rgb(115, 210, 22);\n"
""));
        screen_widget->setScaledContents(true);
        screen_widget->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(screen_widget);

        tip_widget = new QWidget(MainWindow);
        tip_widget->setObjectName(QString::fromUtf8("tip_widget"));
        tip_widget->setMinimumSize(QSize(600, 40));
        tip_widget->setMaximumSize(QSize(16777215, 40));
        tip_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        horizontalLayout_3 = new QHBoxLayout(tip_widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        show_video = new QRadioButton(tip_widget);
        show_video->setObjectName(QString::fromUtf8("show_video"));
        show_video->setChecked(true);

        horizontalLayout_3->addWidget(show_video);

        show_screen = new QRadioButton(tip_widget);
        show_screen->setObjectName(QString::fromUtf8("show_screen"));

        horizontalLayout_3->addWidget(show_screen);

        barrage = new QCheckBox(tip_widget);
        barrage->setObjectName(QString::fromUtf8("barrage"));

        horizontalLayout_3->addWidget(barrage);


        verticalLayout_15->addWidget(tip_widget);


        verticalLayout->addLayout(verticalLayout_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        ui_rocket = new QPushButton(MainWindow);
        ui_rocket->setObjectName(QString::fromUtf8("ui_rocket"));
        ui_rocket->setMinimumSize(QSize(100, 30));
        ui_rocket->setMaximumSize(QSize(100, 30));
        ui_rocket->setFont(font);
        ui_rocket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/png/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_rocket->setIcon(icon1);

        horizontalLayout_7->addWidget(ui_rocket);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        ui_flower = new QPushButton(MainWindow);
        ui_flower->setObjectName(QString::fromUtf8("ui_flower"));
        ui_flower->setMinimumSize(QSize(100, 30));
        ui_flower->setMaximumSize(QSize(100, 30));
        ui_flower->setFont(font);
        ui_flower->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/png/flower.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_flower->setIcon(icon2);

        horizontalLayout_7->addWidget(ui_flower);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        ui_horse = new QPushButton(MainWindow);
        ui_horse->setObjectName(QString::fromUtf8("ui_horse"));
        ui_horse->setMinimumSize(QSize(100, 30));
        ui_horse->setMaximumSize(QSize(100, 30));
        ui_horse->setFont(font);
        ui_horse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/png/horse.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_horse->setIcon(icon3);

        horizontalLayout_7->addWidget(ui_horse);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        ui_like = new QPushButton(MainWindow);
        ui_like->setObjectName(QString::fromUtf8("ui_like"));
        ui_like->setMinimumSize(QSize(100, 30));
        ui_like->setMaximumSize(QSize(100, 30));
        ui_like->setFont(font);
        ui_like->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/png/like.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_like->setIcon(icon4);

        horizontalLayout_7->addWidget(ui_like);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_5->addLayout(verticalLayout);

        line_2 = new QFrame(MainWindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout_5->addWidget(line_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        chat_room = new QTextEdit(MainWindow);
        chat_room->setObjectName(QString::fromUtf8("chat_room"));
        chat_room->setMinimumSize(QSize(300, 0));
        chat_room->setMaximumSize(QSize(300, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font5.setPointSize(16);
        chat_room->setFont(font5);

        verticalLayout_9->addWidget(chat_room);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(MainWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(210, 30));
        lineEdit->setMaximumSize(QSize(210, 999));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Ubuntu Mono"));
        lineEdit->setFont(font6);
        lineEdit->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-radius: 8px;\n"
"	color: rgb(86, 118, 162);\n"
"	border:2px solid rgb(186, 189, 182);"));

        horizontalLayout_2->addWidget(lineEdit);

        send_data = new QPushButton(MainWindow);
        send_data->setObjectName(QString::fromUtf8("send_data"));
        send_data->setMinimumSize(QSize(80, 30));
        send_data->setMaximumSize(QSize(80, 30));
        send_data->setFont(font);
        send_data->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(send_data);


        verticalLayout_9->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_9);


        verticalLayout_17->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_17);


        verticalLayout_5->addLayout(horizontalLayout);

        line_3 = new QFrame(MainWindow);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);


        retranslateUi(MainWindow);

        world_list->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        world_list->setTabText(world_list->indexOf(tab), QCoreApplication::translate("MainWindow", "\344\270\226\347\225\214\345\210\227\350\241\250", nullptr));
        world_list->setTabText(world_list->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\346\210\220\345\221\230\345\210\227\350\241\250", nullptr));
        label_14->setText(QString());
        integral->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        top_up->setText(QCoreApplication::translate("MainWindow", "\345\205\205\345\200\274", nullptr));
        create_room->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\346\210\277\351\227\264", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\350\264\246\345\217\267", nullptr));
        screen_widget->setText(QString());
        show_video->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\350\201\212\345\244\251", nullptr));
        show_screen->setText(QCoreApplication::translate("MainWindow", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
        barrage->setText(QCoreApplication::translate("MainWindow", "\345\274\271\345\271\225", nullptr));
        ui_rocket->setText(QCoreApplication::translate("MainWindow", "\347\201\253\347\256\255/1000", nullptr));
        ui_flower->setText(QCoreApplication::translate("MainWindow", "\351\262\234\350\212\261/100", nullptr));
        ui_horse->setText(QCoreApplication::translate("MainWindow", "\350\276\243\346\235\241/10", nullptr));
        ui_like->setText(QCoreApplication::translate("MainWindow", "\347\202\271\350\265\236", nullptr));
        chat_room->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu Mono'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", nullptr));
        send_data->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
