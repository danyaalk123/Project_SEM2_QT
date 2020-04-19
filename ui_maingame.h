/********************************************************************************
** Form generated from reading UI file 'maingame.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGAME_H
#define UI_MAINGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainGame
{
public:
    QWidget *centralwidget;
    QPushButton *RollDice;
    QLabel *dash;
    QLabel *Goals2;
    QLabel *Goals1;
    QLabel *Possesion;
    QLabel *Team1;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *SelectPlayers1;
    QComboBox *SelectPlayers1_2;
    QLabel *Team2;
    QLabel *Time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainGame)
    {
        if (MainGame->objectName().isEmpty())
            MainGame->setObjectName(QString::fromUtf8("MainGame"));
        MainGame->resize(800, 600);
        centralwidget = new QWidget(MainGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        RollDice = new QPushButton(centralwidget);
        RollDice->setObjectName(QString::fromUtf8("RollDice"));
        RollDice->setGeometry(QRect(300, 410, 171, 61));
        dash = new QLabel(centralwidget);
        dash->setObjectName(QString::fromUtf8("dash"));
        dash->setGeometry(QRect(380, 90, 16, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        dash->setFont(font);
        Goals2 = new QLabel(centralwidget);
        Goals2->setObjectName(QString::fromUtf8("Goals2"));
        Goals2->setGeometry(QRect(410, 80, 31, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        Goals2->setFont(font1);
        Goals1 = new QLabel(centralwidget);
        Goals1->setObjectName(QString::fromUtf8("Goals1"));
        Goals1->setGeometry(QRect(340, 80, 31, 51));
        Goals1->setFont(font1);
        Possesion = new QLabel(centralwidget);
        Possesion->setObjectName(QString::fromUtf8("Possesion"));
        Possesion->setGeometry(QRect(31, 140, 711, 78));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        Possesion->setFont(font2);
        Possesion->setAlignment(Qt::AlignCenter);
        Team1 = new QLabel(centralwidget);
        Team1->setObjectName(QString::fromUtf8("Team1"));
        Team1->setGeometry(QRect(10, 70, 291, 78));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        Team1->setFont(font3);
        Team1->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 290, 741, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(350);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        SelectPlayers1 = new QComboBox(horizontalLayoutWidget_2);
        SelectPlayers1->setObjectName(QString::fromUtf8("SelectPlayers1"));

        horizontalLayout_2->addWidget(SelectPlayers1);

        SelectPlayers1_2 = new QComboBox(horizontalLayoutWidget_2);
        SelectPlayers1_2->setObjectName(QString::fromUtf8("SelectPlayers1_2"));

        horizontalLayout_2->addWidget(SelectPlayers1_2);

        Team2 = new QLabel(centralwidget);
        Team2->setObjectName(QString::fromUtf8("Team2"));
        Team2->setGeometry(QRect(470, 70, 291, 78));
        Team2->setFont(font3);
        Team2->setAlignment(Qt::AlignCenter);
        Time = new QLabel(centralwidget);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setGeometry(QRect(310, 20, 151, 41));
        QFont font4;
        font4.setPointSize(10);
        Time->setFont(font4);
        Time->setAlignment(Qt::AlignCenter);
        MainGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainGame->setMenuBar(menubar);
        statusbar = new QStatusBar(MainGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainGame->setStatusBar(statusbar);

        retranslateUi(MainGame);

        QMetaObject::connectSlotsByName(MainGame);
    } // setupUi

    void retranslateUi(QMainWindow *MainGame)
    {
        MainGame->setWindowTitle(QCoreApplication::translate("MainGame", "MainWindow", nullptr));
        RollDice->setText(QCoreApplication::translate("MainGame", "Roll The Dice", nullptr));
        dash->setText(QCoreApplication::translate("MainGame", "\342\200\223", nullptr));
        Goals2->setText(QCoreApplication::translate("MainGame", "00", nullptr));
        Goals1->setText(QCoreApplication::translate("MainGame", "00", nullptr));
        Possesion->setText(QCoreApplication::translate("MainGame", "TextLabel", nullptr));
        Team1->setText(QCoreApplication::translate("MainGame", "TextLabel", nullptr));
        Team2->setText(QCoreApplication::translate("MainGame", "TextLabel", nullptr));
        Time->setText(QCoreApplication::translate("MainGame", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainGame: public Ui_MainGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGAME_H
