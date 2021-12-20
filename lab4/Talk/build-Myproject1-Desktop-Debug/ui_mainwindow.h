/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Talk
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit1;
    QLineEdit *lineEdit;
    QPushButton *pushButton1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Talk)
    {
        if (Talk->objectName().isEmpty())
            Talk->setObjectName(QString::fromUtf8("Talk"));
        Talk->resize(400, 300);
        Talk->setMinimumSize(QSize(400, 300));
        centralWidget = new QWidget(Talk);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 10, 251, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit1 = new QTextEdit(verticalLayoutWidget);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));

        verticalLayout->addWidget(textEdit1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton1 = new QPushButton(verticalLayoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        verticalLayout->addWidget(pushButton1);

        Talk->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Talk);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        Talk->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Talk);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Talk->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Talk);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Talk->setStatusBar(statusBar);

        retranslateUi(Talk);
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), textEdit1, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(Talk);
    } // setupUi

    void retranslateUi(QMainWindow *Talk)
    {
        Talk->setWindowTitle(QApplication::translate("Talk", "Talk", 0, QApplication::UnicodeUTF8));
        pushButton1->setText(QApplication::translate("Talk", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Talk: public Ui_Talk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
