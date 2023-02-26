/********************************************************************************
** Form generated from reading UI file 'feasy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEASY_H
#define UI_FEASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_feasy
{
public:

    void setupUi(QWidget *feasy)
    {
        if (feasy->objectName().isEmpty())
            feasy->setObjectName(QString::fromUtf8("feasy"));
        feasy->resize(400, 300);

        retranslateUi(feasy);

        QMetaObject::connectSlotsByName(feasy);
    } // setupUi

    void retranslateUi(QWidget *feasy)
    {
        feasy->setWindowTitle(QApplication::translate("feasy", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class feasy: public Ui_feasy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEASY_H
