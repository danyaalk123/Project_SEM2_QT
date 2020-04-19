/********************************************************************************
** Form generated from reading UI file 'game_options.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_OPTIONS_H
#define UI_GAME_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_Options
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *Multi;
    QRadioButton *Goals;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *No_Players;
    QPushButton *Game_Options_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *Single;
    QRadioButton *Timed;
    QButtonGroup *WinCondition;
    QButtonGroup *Mode;

    void setupUi(QDialog *Game_Options)
    {
        if (Game_Options->objectName().isEmpty())
            Game_Options->setObjectName(QString::fromUtf8("Game_Options"));
        Game_Options->resize(400, 300);
        layoutWidget = new QWidget(Game_Options);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 30, 104, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Multi = new QRadioButton(layoutWidget);
        Mode = new QButtonGroup(Game_Options);
        Mode->setObjectName(QString::fromUtf8("Mode"));
        Mode->addButton(Multi);
        Multi->setObjectName(QString::fromUtf8("Multi"));

        verticalLayout_4->addWidget(Multi);

        Goals = new QRadioButton(layoutWidget);
        WinCondition = new QButtonGroup(Game_Options);
        WinCondition->setObjectName(QString::fromUtf8("WinCondition"));
        WinCondition->addButton(Goals);
        Goals->setObjectName(QString::fromUtf8("Goals"));

        verticalLayout_4->addWidget(Goals);

        layoutWidget_2 = new QWidget(Game_Options);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 40, 90, 141));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        No_Players = new QComboBox(Game_Options);
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->addItem(QString());
        No_Players->setObjectName(QString::fromUtf8("No_Players"));
        No_Players->setGeometry(QRect(180, 160, 191, 22));
        No_Players->setFrame(false);
        Game_Options_2 = new QPushButton(Game_Options);
        Game_Options_2->setObjectName(QString::fromUtf8("Game_Options_2"));
        Game_Options_2->setGeometry(QRect(140, 230, 81, 31));
        layoutWidget_3 = new QWidget(Game_Options);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(170, 30, 87, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Single = new QRadioButton(layoutWidget_3);
        Mode->addButton(Single);
        Single->setObjectName(QString::fromUtf8("Single"));

        verticalLayout_2->addWidget(Single);

        Timed = new QRadioButton(layoutWidget_3);
        WinCondition->addButton(Timed);
        Timed->setObjectName(QString::fromUtf8("Timed"));

        verticalLayout_2->addWidget(Timed);


        retranslateUi(Game_Options);

        QMetaObject::connectSlotsByName(Game_Options);
    } // setupUi

    void retranslateUi(QDialog *Game_Options)
    {
        Game_Options->setWindowTitle(QCoreApplication::translate("Game_Options", "Dialog", nullptr));
        Multi->setText(QCoreApplication::translate("Game_Options", "Multi-Player", nullptr));
        Goals->setText(QCoreApplication::translate("Game_Options", "Number of Goals", nullptr));
        label->setText(QCoreApplication::translate("Game_Options", "Mode", nullptr));
        label_2->setText(QCoreApplication::translate("Game_Options", "Win Condition", nullptr));
        label_3->setText(QCoreApplication::translate("Game_Options", "Number of Players", nullptr));
        No_Players->setItemText(0, QCoreApplication::translate("Game_Options", "3", nullptr));
        No_Players->setItemText(1, QCoreApplication::translate("Game_Options", "4", nullptr));
        No_Players->setItemText(2, QCoreApplication::translate("Game_Options", "5", nullptr));
        No_Players->setItemText(3, QCoreApplication::translate("Game_Options", "6", nullptr));
        No_Players->setItemText(4, QCoreApplication::translate("Game_Options", "7", nullptr));
        No_Players->setItemText(5, QCoreApplication::translate("Game_Options", "8", nullptr));
        No_Players->setItemText(6, QCoreApplication::translate("Game_Options", "9", nullptr));
        No_Players->setItemText(7, QCoreApplication::translate("Game_Options", "10", nullptr));
        No_Players->setItemText(8, QCoreApplication::translate("Game_Options", "11", nullptr));

        No_Players->setCurrentText(QCoreApplication::translate("Game_Options", "3", nullptr));
        Game_Options_2->setText(QCoreApplication::translate("Game_Options", "Enter", nullptr));
        Single->setText(QCoreApplication::translate("Game_Options", "Single-Player", nullptr));
        Timed->setText(QCoreApplication::translate("Game_Options", "Timed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game_Options: public Ui_Game_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_OPTIONS_H
