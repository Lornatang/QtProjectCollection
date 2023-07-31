/********************************************************************************
** Form generated from reading UI file 'monitorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORWINDOW_H
#define UI_MONITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonitorWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *MonitorWindow)
    {
        if (MonitorWindow->objectName().isEmpty())
            MonitorWindow->setObjectName(QString::fromUtf8("MonitorWindow"));
        MonitorWindow->resize(800, 480);
        label = new QLabel(MonitorWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 230, 101, 16));

        retranslateUi(MonitorWindow);

        QMetaObject::connectSlotsByName(MonitorWindow);
    } // setupUi

    void retranslateUi(QWidget *MonitorWindow)
    {
        MonitorWindow->setWindowTitle(QCoreApplication::translate("MonitorWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("MonitorWindow", "MonitorWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonitorWindow: public Ui_MonitorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORWINDOW_H
