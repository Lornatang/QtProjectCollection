#include "../include/userwindow.h"
#include "../ui/ui_userwindow.h"

UserWindow::UserWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
}

UserWindow::~UserWindow()
{
    delete ui;
}
