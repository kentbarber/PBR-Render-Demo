#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_OpenGLApp.h"

//TODO: Programatically add menus
//https://doc.qt.io/qt-6/qtwidgets-mainwindows-menus-example.html

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

private slots:

signals:

private:
	Ui::OpenGLAppClass ui;
};

#endif