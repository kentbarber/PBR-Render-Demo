#include "mainwindow.h"
#include "glwidget.h"


MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(tr("PBR Render"));

	QPushButton *next = ui.pushButton_1;
	QPushButton *pre = ui.pushButton_2;
	GLWidget *glWidget = ui.openGLWidget;

	connect(next, &QPushButton::pressed, glWidget, &GLWidget::nextCurrIndex);
	connect(pre, &QPushButton::pressed, glWidget, &GLWidget::preCurrIndex);
}
