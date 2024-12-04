/********************************************************************************
** Form generated from reading UI file 'new_window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_WINDOW_H
#define UI_NEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_New_window
{
public:
    QLabel *label;

    void setupUi(QDialog *New_window)
    {
        if (New_window->objectName().isEmpty())
            New_window->setObjectName("New_window");
        New_window->resize(735, 328);
        label = new QLabel(New_window);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 70, 241, 111));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(New_window);

        QMetaObject::connectSlotsByName(New_window);
    } // setupUi

    void retranslateUi(QDialog *New_window)
    {
        New_window->setWindowTitle(QCoreApplication::translate("New_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("New_window", "\320\240\320\276\320\274\320\260, \321\202\321\213 \320\277\320\276\320\272\320\260 \321\207\321\202\320\276 \320\274\320\276\320\273\320\276\320\264\320\265\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_window: public Ui_New_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_WINDOW_H
