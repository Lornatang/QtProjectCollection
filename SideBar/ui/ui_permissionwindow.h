/********************************************************************************
** Form generated from reading UI file 'permissionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMISSIONWINDOW_H
#define UI_PERMISSIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PermissionWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *PermissionWindow)
    {
        if (PermissionWindow->objectName().isEmpty())
            PermissionWindow->setObjectName(QString::fromUtf8("PermissionWindow"));
        PermissionWindow->resize(862, 574);
        PermissionWindow->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(PermissionWindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(PermissionWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("04b03"));
        font.setPointSize(48);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(PermissionWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(PermissionWindow);

        QMetaObject::connectSlotsByName(PermissionWindow);
    } // setupUi

    void retranslateUi(QWidget *PermissionWindow)
    {
        PermissionWindow->setWindowTitle(QCoreApplication::translate("PermissionWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("PermissionWindow", "\350\277\231\346\230\257\346\235\203\351\231\220\347\256\241\347\220\206\347\252\227\345\217\243", nullptr));
        pushButton->setText(QCoreApplication::translate("PermissionWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PermissionWindow: public Ui_PermissionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMISSIONWINDOW_H
