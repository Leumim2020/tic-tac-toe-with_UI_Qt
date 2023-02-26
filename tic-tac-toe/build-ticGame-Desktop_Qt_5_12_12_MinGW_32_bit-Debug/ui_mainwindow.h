/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *btn_exit;
    QPushButton *btn_level1;
    QPushButton *btn_level2;
    QPushButton *btn_level3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(270, 230);
        MainWindow->setMinimumSize(QSize(270, 230));
        MainWindow->setMaximumSize(QSize(270, 230));
        MainWindow->setStyleSheet(QString::fromUtf8("background:black;\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 31, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Script"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white\n"
"\n"
"\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 20, 41, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:white\n"
"\n"
"\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 20, 41, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:white\n"
"\n"
"\n"
""));
        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(80, 180, 109, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Script"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btn_exit->setFont(font1);
        btn_exit->setCursor(QCursor(Qt::PointingHandCursor));
        btn_exit->setStyleSheet(QString::fromUtf8("border:1px solid red;\n"
"color:white"));
        btn_level1 = new QPushButton(centralwidget);
        btn_level1->setObjectName(QString::fromUtf8("btn_level1"));
        btn_level1->setGeometry(QRect(50, 60, 169, 31));
        btn_level1->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe Print"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        btn_level1->setFont(font2);
        btn_level1->setCursor(QCursor(Qt::PointingHandCursor));
        btn_level1->setStyleSheet(QString::fromUtf8("border:none;\n"
"border:1px solid #fff;\n"
"color:green;\n"
"\n"
"\n"
""));
        btn_level2 = new QPushButton(centralwidget);
        btn_level2->setObjectName(QString::fromUtf8("btn_level2"));
        btn_level2->setGeometry(QRect(50, 100, 169, 31));
        btn_level2->setFont(font);
        btn_level2->setCursor(QCursor(Qt::PointingHandCursor));
        btn_level2->setStyleSheet(QString::fromUtf8("border:1px solid #fff;\n"
"color:blue"));
        btn_level3 = new QPushButton(centralwidget);
        btn_level3->setObjectName(QString::fromUtf8("btn_level3"));
        btn_level3->setGeometry(QRect(50, 140, 169, 31));
        btn_level3->setFont(font);
        btn_level3->setCursor(QCursor(Qt::PointingHandCursor));
        btn_level3->setStyleSheet(QString::fromUtf8("border:1px solid #fff;\n"
"color:red"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_exit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "TIC", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TAC", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "TOE", nullptr));
        btn_exit->setText(QApplication::translate("MainWindow", "SAIR", nullptr));
        btn_level1->setText(QApplication::translate("MainWindow", "F\303\201CIL", nullptr));
        btn_level2->setText(QApplication::translate("MainWindow", "M\303\211DIO", nullptr));
        btn_level3->setText(QApplication::translate("MainWindow", "DIF\303\215CIL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
