/********************************************************************************
** Form generated from reading UI file 'dialogv2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGV2_H
#define UI_DIALOGV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogV2
{
public:

    void setupUi(QDialog *DialogV2)
    {
        if (DialogV2->objectName().isEmpty())
            DialogV2->setObjectName("DialogV2");
        DialogV2->resize(400, 300);

        retranslateUi(DialogV2);

        QMetaObject::connectSlotsByName(DialogV2);
    } // setupUi

    void retranslateUi(QDialog *DialogV2)
    {
        DialogV2->setWindowTitle(QCoreApplication::translate("DialogV2", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogV2: public Ui_DialogV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGV2_H
