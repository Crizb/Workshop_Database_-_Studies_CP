/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QLabel *label_4;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menuBar;
    QMenu *menuWorkshop_Database;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(433, 399);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(433, 399));
        MainWindow->setMaximumSize(QSize(433, 399));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 111, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 10, 111, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 40, 111, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 40, 111, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 10, 81, 23));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 40, 81, 23));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(340, 10, 81, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 90, 81, 16));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 190, 321, 51));
        textEdit_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_2->setLineWrapMode(QTextEdit::NoWrap);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 70, 321, 51));
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 150, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 210, 47, 13));
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(10, 130, 321, 51));
        textEdit_3->setLineWrapMode(QTextEdit::NoWrap);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 290, 47, 13));
        textEdit_4 = new QTextEdit(centralWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(10, 250, 321, 91));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_4->sizePolicy().hasHeightForWidth());
        textEdit_4->setSizePolicy(sizePolicy1);
        textEdit_4->setFrameShape(QFrame::StyledPanel);
        textEdit_4->setFrameShadow(QFrame::Sunken);
        textEdit_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit_4->setTabChangesFocus(false);
        textEdit_4->setLineWrapMode(QTextEdit::NoWrap);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(340, 40, 81, 23));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(380, 320, 51, 20));
        QFont font;
        font.setPointSize(4);
        pushButton_9->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 433, 21));
        menuWorkshop_Database = new QMenu(menuBar);
        menuWorkshop_Database->setObjectName(QString::fromUtf8("menuWorkshop_Database"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuWorkshop_Database->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search For Object", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Search For Location", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Show All Objects", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Show All Locations", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Add Object", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Delete Object", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Create Object", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Object", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Save Changes", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Clear Database", nullptr));
        menuWorkshop_Database->setTitle(QCoreApplication::translate("MainWindow", "Workshop Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
