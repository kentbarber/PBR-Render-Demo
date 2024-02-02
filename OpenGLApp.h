#pragma once

//#include <QtWidgets/QMainWindow>
#include <QOpenGLWidget>
#include "ui_OpenGLApp.h"

class OpenGLApp : public QOpenGLWidget
{
    Q_OBJECT

public:
    OpenGLApp(QWidget *parent = nullptr);
    ~OpenGLApp();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private:
    Ui::OpenGLAppClass ui;
};
