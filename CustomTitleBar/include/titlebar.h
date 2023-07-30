#pragma once

#include <QFile>
#include <QMouseEvent>
#include <QToolButton>
#include <QWidget>

class TitleBar : public QWidget {
  Q_OBJECT

public:
  TitleBar(QWidget *parent);
  ~TitleBar();

protected:
  void mousePressEvent(QMouseEvent *event);
  void mouseDoubleClickEvent(QMouseEvent *event);

private:
  void toggleMaxState();
};
