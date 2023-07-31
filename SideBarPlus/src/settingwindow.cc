#include "../include/settingwindow.h"
#include "../ui/ui_settingwindow.h"

SettingWindow::SettingWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::SettingWindow) {
  ui->setupUi(this);
}

SettingWindow::~SettingWindow() { delete ui; }
