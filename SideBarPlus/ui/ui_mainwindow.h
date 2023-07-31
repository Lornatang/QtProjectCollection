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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *sideBar;
    QGridLayout *gridLayout;
    QToolButton *btnSettring;
    QToolButton *btnHome;
    QSpacerItem *verticalSpacer;
    QToolButton *btnMonitor;
    QToolButton *btnAbout;
    QToolButton *toolButton_close;
    QToolButton *toolButton_min;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sideBar = new QWidget(centralWidget);
        sideBar->setObjectName(QString::fromUtf8("sideBar"));
        sideBar->setEnabled(true);
        sideBar->setGeometry(QRect(0, 0, 120, 450));
        sideBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(228, 228, 228);\n"
"}"));
        gridLayout = new QGridLayout(sideBar);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnSettring = new QToolButton(sideBar);
        btnSettring->setObjectName(QString::fromUtf8("btnSettring"));
        btnSettring->setMinimumSize(QSize(120, 50));
        btnSettring->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"        QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 3px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              border-left: 18px outset rgb(93, 95, 97);\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }\n"
"        "));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/\350\256\276\347\275\256.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSettring->setIcon(icon);
        btnSettring->setIconSize(QSize(20, 20));
        btnSettring->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnSettring->setAutoRaise(true);

        gridLayout->addWidget(btnSettring, 3, 0, 1, 1);

        btnHome = new QToolButton(sideBar);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setMinimumSize(QSize(120, 50));
        btnHome->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"        QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 3px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              border-left: 18px outset rgb(93, 95, 97);\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }\n"
"        "));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHome->setIcon(icon1);
        btnHome->setIconSize(QSize(20, 20));
        btnHome->setAutoRepeat(false);
        btnHome->setAutoExclusive(false);
        btnHome->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnHome->setAutoRaise(true);

        gridLayout->addWidget(btnHome, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        btnMonitor = new QToolButton(sideBar);
        btnMonitor->setObjectName(QString::fromUtf8("btnMonitor"));
        btnMonitor->setMinimumSize(QSize(120, 50));
        btnMonitor->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"        QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 3px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              border-left: 18px outset rgb(93, 95, 97);\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }\n"
"        "));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/\347\233\221\346\216\247.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMonitor->setIcon(icon2);
        btnMonitor->setIconSize(QSize(20, 20));
        btnMonitor->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnMonitor->setAutoRaise(true);

        gridLayout->addWidget(btnMonitor, 2, 0, 1, 1);

        btnAbout = new QToolButton(sideBar);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));
        btnAbout->setMinimumSize(QSize(120, 50));
        btnAbout->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"        QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 3px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              border-left: 18px outset rgb(93, 95, 97);\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }\n"
"        "));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/\345\205\263\344\272\216.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAbout->setIcon(icon3);
        btnAbout->setIconSize(QSize(20, 20));
        btnAbout->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnAbout->setAutoRaise(true);
        btnAbout->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(btnAbout, 4, 0, 1, 1);

        toolButton_close = new QToolButton(centralWidget);
        toolButton_close->setObjectName(QString::fromUtf8("toolButton_close"));
        toolButton_close->setGeometry(QRect(770, 0, 30, 30));
        toolButton_close->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/side_bar_plus/resources/images/\345\205\263\351\227\255.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_close->setIcon(icon4);
        toolButton_close->setAutoRaise(true);
        toolButton_min = new QToolButton(centralWidget);
        toolButton_min->setObjectName(QString::fromUtf8("toolButton_min"));
        toolButton_min->setGeometry(QRect(740, 0, 30, 30));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/side_bar_plus/resources/images/\346\250\252\346\235\240.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_min->setIcon(icon5);
        toolButton_min->setAutoRaise(true);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(120, 30, 680, 450));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(statustip)
        MainWindow->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        MainWindow->setWindowFilePath(QString());
        btnSettring->setText(QCoreApplication::translate("MainWindow", "   \350\256\276\347\275\256", nullptr));
        btnHome->setText(QCoreApplication::translate("MainWindow", "   \344\270\273\351\241\265", nullptr));
        btnMonitor->setText(QCoreApplication::translate("MainWindow", "   \347\233\221\346\216\247", nullptr));
        btnAbout->setText(QCoreApplication::translate("MainWindow", "   \345\205\263\344\272\216", nullptr));
        toolButton_close->setText(QString());
        toolButton_min->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
