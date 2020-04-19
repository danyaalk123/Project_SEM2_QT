/********************************************************************************
** Form generated from reading UI file 'team_select.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAM_SELECT_H
#define UI_TEAM_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Team_Select
{
public:
    QPushButton *InputTeam;
    QLabel *Enter_Player;
    QLabel *inputPT;
    QLineEdit *line;

    void setupUi(QDialog *Team_Select)
    {
        if (Team_Select->objectName().isEmpty())
            Team_Select->setObjectName(QString::fromUtf8("Team_Select"));
        Team_Select->resize(400, 300);
        InputTeam = new QPushButton(Team_Select);
        InputTeam->setObjectName(QString::fromUtf8("InputTeam"));
        InputTeam->setGeometry(QRect(130, 190, 111, 41));
        Enter_Player = new QLabel(Team_Select);
        Enter_Player->setObjectName(QString::fromUtf8("Enter_Player"));
        Enter_Player->setGeometry(QRect(60, 40, 211, 31));
        inputPT = new QLabel(Team_Select);
        inputPT->setObjectName(QString::fromUtf8("inputPT"));
        inputPT->setGeometry(QRect(30, 0, 271, 111));
        line = new QLineEdit(Team_Select);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(130, 130, 113, 20));

        retranslateUi(Team_Select);

        QMetaObject::connectSlotsByName(Team_Select);
    } // setupUi

    void retranslateUi(QDialog *Team_Select)
    {
        Team_Select->setWindowTitle(QCoreApplication::translate("Team_Select", "Dialog", nullptr));
        InputTeam->setText(QCoreApplication::translate("Team_Select", "Enter", nullptr));
        Enter_Player->setText(QString());
        inputPT->setText(QCoreApplication::translate("Team_Select", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Team_Select: public Ui_Team_Select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAM_SELECT_H
