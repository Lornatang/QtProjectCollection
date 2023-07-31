#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QButtonGroup>
#include <QMainWindow>

#include "permissionwindow.h"
#include "settingswindow.h"
#include "userwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private:
  Ui::MainWindow *ui;

  QButtonGroup btnGroup;
  UserWindow userWnd;
  PermissionWindow permissionWnd;
  SettingsWindow settingsWnd;
};
#endif // MAINWINDOW_H
