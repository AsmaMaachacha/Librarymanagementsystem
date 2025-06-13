/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *mainLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *pageResources;
    QVBoxLayout *verticalLayoutResources;
    QHBoxLayout *buttonsLayout;
    QPushButton *btnAddBook;
    QPushButton *btnAddArticle;
    QPushButton *btnAddThesis;
    QPushButton *btnAddMedia;
    QTableWidget *tableResources;
    QWidget *pageUsers;
    QVBoxLayout *verticalLayoutUsers;
    QPushButton *btnAddUser;
    QTableWidget *tableUsers;
    QWidget *pageLoans;
    QVBoxLayout *verticalLayoutLoans;
    QHBoxLayout *loanButtons;
    QPushButton *btnBorrow;
    QPushButton *btnReturn;
    QTableWidget *tableLoans;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QHBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");

        mainLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageResources = new QWidget();
        pageResources->setObjectName("pageResources");
        verticalLayoutResources = new QVBoxLayout(pageResources);
        verticalLayoutResources->setObjectName("verticalLayoutResources");
        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        btnAddBook = new QPushButton(pageResources);
        btnAddBook->setObjectName("btnAddBook");

        buttonsLayout->addWidget(btnAddBook);

        btnAddArticle = new QPushButton(pageResources);
        btnAddArticle->setObjectName("btnAddArticle");

        buttonsLayout->addWidget(btnAddArticle);

        btnAddThesis = new QPushButton(pageResources);
        btnAddThesis->setObjectName("btnAddThesis");

        buttonsLayout->addWidget(btnAddThesis);

        btnAddMedia = new QPushButton(pageResources);
        btnAddMedia->setObjectName("btnAddMedia");

        buttonsLayout->addWidget(btnAddMedia);


        verticalLayoutResources->addLayout(buttonsLayout);

        tableResources = new QTableWidget(pageResources);
        tableResources->setObjectName("tableResources");

        verticalLayoutResources->addWidget(tableResources);

        stackedWidget->addWidget(pageResources);
        pageUsers = new QWidget();
        pageUsers->setObjectName("pageUsers");
        verticalLayoutUsers = new QVBoxLayout(pageUsers);
        verticalLayoutUsers->setObjectName("verticalLayoutUsers");
        btnAddUser = new QPushButton(pageUsers);
        btnAddUser->setObjectName("btnAddUser");

        verticalLayoutUsers->addWidget(btnAddUser);

        tableUsers = new QTableWidget(pageUsers);
        tableUsers->setObjectName("tableUsers");

        verticalLayoutUsers->addWidget(tableUsers);

        stackedWidget->addWidget(pageUsers);
        pageLoans = new QWidget();
        pageLoans->setObjectName("pageLoans");
        verticalLayoutLoans = new QVBoxLayout(pageLoans);
        verticalLayoutLoans->setObjectName("verticalLayoutLoans");
        loanButtons = new QHBoxLayout();
        loanButtons->setObjectName("loanButtons");
        btnBorrow = new QPushButton(pageLoans);
        btnBorrow->setObjectName("btnBorrow");

        loanButtons->addWidget(btnBorrow);

        btnReturn = new QPushButton(pageLoans);
        btnReturn->setObjectName("btnReturn");

        loanButtons->addWidget(btnReturn);


        verticalLayoutLoans->addLayout(loanButtons);

        tableLoans = new QTableWidget(pageLoans);
        tableLoans->setObjectName("tableLoans");

        verticalLayoutLoans->addWidget(tableLoans);

        stackedWidget->addWidget(pageLoans);

        mainLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Library Management System", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Resources", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Loans", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        btnAddBook->setText(QCoreApplication::translate("MainWindow", "Add Book", nullptr));
        btnAddArticle->setText(QCoreApplication::translate("MainWindow", "Add Article", nullptr));
        btnAddThesis->setText(QCoreApplication::translate("MainWindow", "Add Thesis", nullptr));
        btnAddMedia->setText(QCoreApplication::translate("MainWindow", "Add Media", nullptr));
        btnAddUser->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        btnBorrow->setText(QCoreApplication::translate("MainWindow", "Borrow", nullptr));
        btnReturn->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
