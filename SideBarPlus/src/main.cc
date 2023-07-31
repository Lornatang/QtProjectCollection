#include <QApplication>

#include "../include/mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.setWindowFlags(Qt::FramelessWindowHint | Qt::Tool |
                   Qt::WindowStaysOnTopHint);
  w.setFixedSize(800, 480); // 规定大小，不可缩
  w.show();

  return a.exec();
}
