#ifndef MONITORWINDOW_H
#define MONITORWINDOW_H

#include <QWidget>

namespace Ui {
class MonitorWindow;
}

class MonitorWindow : public QWidget {
  Q_OBJECT

public:
  explicit MonitorWindow(QWidget *parent = 0);
  ~MonitorWindow();

private:
  Ui::MonitorWindow *ui;
};

#endif // MONITORWINDOW_H
