#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QButtonGroup>
#include <QMainWindow>
#include <QMouseEvent>
#include <QPainter>
#include <QPropertyAnimation>
#include <QtWidgets>

#include "aboutwindow.h"
#include "homewindow.h"
#include "monitorwindow.h"
#include "settingwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_toolButton_min_clicked();
  void on_toolButton_close_clicked();

private:
  Ui::MainWindow *ui;

  QButtonGroup btnGroup;
  HomeWindow homeWnd;
  MonitorWindow monitorWnd;
  SettingWindow settringWnd;
  AboutWindow aboutWnd;

private:
  QPoint m_dragPosition; // 用于记录鼠标点击位置

protected:
  void mousePressEvent(QMouseEvent *event);

  void mouseMoveEvent(QMouseEvent *event);
};

#endif // MAINWINDOW_H
