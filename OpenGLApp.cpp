#include "OpenGLApp.h"

OpenGLApp::OpenGLApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

OpenGLApp::~OpenGLApp()
{}

void OpenGLApp::initializeGL()
{
    glClearColor(0, 0, 1, 1); //define blue color as background color
}
void OpenGLApp::resizeGL(int w, int h)
{
}
void OpenGLApp::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
}