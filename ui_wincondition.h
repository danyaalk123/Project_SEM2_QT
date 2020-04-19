/********************************************************************************
** Form generated from reading UI file 'wincondition.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINCONDITION_H
#define UI_WINCONDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_wincondition
{
public:
    QLabel *Text;
    QPushButton *Win_Button;
    QLineEdit *Win;

    void setupUi(QDialog *wincondition)
    {
        if (wincondition->objectName().isEmpty())
            wincondition->setObjectName(QString::fromUtf8("wincondition"));
        wincondition->resize(400, 300);
        Text = new QLabel(wincondition);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setGeometry(QRect(20, 10, 341, 111));
        Text->setAlignment(Qt::AlignCenter);
        Win_Button = new QPushButton(wincondition);
        Win_Button->setObjectName(QString::fromUtf8("Win_Button"));
        Win_Button->setGeometry(QRect(140, 210, 101, 31));
        Win = new QLineEdit(wincondition);
        Win->setObjectName(QString::fromUtf8("Win"));
        Win->setGeometry(QRect(130, 140, 121, 20));

        retranslateUi(wincondition);

        QMetaObject::connectSlotsByName(wincondition);
    } // setupUi

    void retranslateUi(QDialog *wincondition)
    {
        wincondition->setWindowTitle(QCoreApplication::translate("wincondition", "Dialog", nullptr));
        Text->setText(QCoreApplication::translate("wincondition", "TextLabel", nullptr));
        Win_Button->setText(QCoreApplication::translate("wincondition", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wincondition: public Ui_wincondition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINCONDITION_H
