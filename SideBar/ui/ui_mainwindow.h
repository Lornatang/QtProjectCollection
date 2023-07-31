/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget1;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QGridLayout *gridLayout_2;
    QWidget *sideBar;
    QGridLayout *gridLayout;
    QToolButton *btnSettings;
    QToolButton *btnPermission;
    QToolButton *btnUser;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 1200);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 140, 579, 680));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(30, 30));
        toolButton = new QToolButton(widget1);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(460, 0, 47, 30));
        toolButton->setMinimumSize(QSize(30, 30));
        toolButton_2 = new QToolButton(widget1);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(530, 10, 47, 21));

        verticalLayout_2->addWidget(widget1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sideBar = new QWidget(widget);
        sideBar->setObjectName(QString::fromUtf8("sideBar"));
        sideBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(228, 228, 228);\n"
"}"));
        gridLayout = new QGridLayout(sideBar);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnSettings = new QToolButton(sideBar);
        btnSettings->setObjectName(QString::fromUtf8("btnSettings"));
        btnSettings->setMinimumSize(QSize(86, 90));
        btnSettings->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;\n"
"    min-height: 80px;\n"
"	background-color: rgb(228, 228, 228);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSettings->setIcon(icon);
        btnSettings->setIconSize(QSize(48, 48));
        btnSettings->setCheckable(true);
        btnSettings->setAutoExclusive(true);
        btnSettings->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnSettings, 2, 0, 1, 1);

        btnPermission = new QToolButton(sideBar);
        btnPermission->setObjectName(QString::fromUtf8("btnPermission"));
        btnPermission->setMinimumSize(QSize(86, 90));
        btnPermission->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;\n"
"    min-height: 80px;\n"
"	background-color: rgb(228, 228, 228);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/permission.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPermission->setIcon(icon1);
        btnPermission->setIconSize(QSize(48, 48));
        btnPermission->setCheckable(true);
        btnPermission->setAutoExclusive(true);
        btnPermission->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnPermission, 1, 0, 1, 1);

        btnUser = new QToolButton(sideBar);
        btnUser->setObjectName(QString::fromUtf8("btnUser"));
        btnUser->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;\n"
"    min-height: 80px;\n"
"	background-color: rgb(228, 228, 228);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUser->setIcon(icon2);
        btnUser->setIconSize(QSize(48, 48));
        btnUser->setCheckable(true);
        btnUser->setAutoExclusive(true);
        btnUser->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnUser, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout_2->addWidget(sideBar, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(480, 640));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 1);
        gridLayout_2->setColumnMinimumWidth(1, 7);

        verticalLayout_2->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        btnSettings->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        btnPermission->setText(QCoreApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        btnUser->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
