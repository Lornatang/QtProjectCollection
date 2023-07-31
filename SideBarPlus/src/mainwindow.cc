#include "../include/mainwindow.h"

#include "../ui/ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  // 隐藏标题（关闭）
  // this->setWindowFlags(Qt::SplashScreen|Qt::WindowStaysOnTopHint|Qt::FramelessWindowHint);

  ui->stackedWidget->addWidget(&homeWnd);
  ui->stackedWidget->addWidget(&monitorWnd);
  ui->stackedWidget->addWidget(&settringWnd);
  ui->stackedWidget->addWidget(&aboutWnd);

  btnGroup.addButton(ui->btnHome, 0);
  btnGroup.addButton(ui->btnMonitor, 1);
  btnGroup.addButton(ui->btnSettring, 2);
  btnGroup.addButton(ui->btnAbout, 3);

  connect(
      &btnGroup,
      static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked),
      ui->stackedWidget, &QStackedWidget::setCurrentIndex);

  // 设置默认选中的页面
  btnGroup.button(0)->setChecked(true);
  ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow() { delete ui; }

// 最小化（未实现恢复）
void MainWindow::on_toolButton_min_clicked() { this->hide(); }
// 关闭窗口
void MainWindow::on_toolButton_close_clicked() { this->close(); }

void MainWindow::mousePressEvent(QMouseEvent* event) {
  if (event->button() == Qt::LeftButton) {
    // 记录鼠标按下的位置，用于计算移动距离
    m_dragPosition = event->globalPos() - frameGeometry().topLeft();
    event->accept();
  }
}

void MainWindow::mouseMoveEvent(QMouseEvent* event) {
  if (event->buttons() & Qt::LeftButton) {
    // 移动窗口
    move(event->globalPos() - m_dragPosition);
    event->accept();
  }
}
