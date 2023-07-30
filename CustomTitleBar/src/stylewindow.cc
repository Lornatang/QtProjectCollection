#include "../include/stylewindow.h"
#include "../include/stdafx.h"

StyleWindow::StyleWindow(QWidget *parent) : FramelessWindow(parent) {
  resize(800, 600);
}
