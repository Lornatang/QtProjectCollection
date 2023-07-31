#include "../include/monitorwindow.h"
#include "../ui/ui_monitorwindow.h"

MonitorWindow::MonitorWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::MonitorWindow) {
  ui->setupUi(this);
}

MonitorWindow::~MonitorWindow() { delete ui; }
