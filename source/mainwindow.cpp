#include "mainwindow.h"
#include "glwidget.h"

#include <QHBoxLayout>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(tr("PBR Render"));

	QPushButton *next = ui.pushButton_1;
	QPushButton *pre = ui.pushButton_2;
	GLWidget *glWidget = ui.openGLWidget;

	connect(next, &QPushButton::pressed, glWidget, &GLWidget::nextCurrIndex);
	connect(pre, &QPushButton::pressed, glWidget, &GLWidget::preCurrIndex);

	connect(ui.actionLoad_Material, &QAction::triggered, this, &MainWindow::loadMaterial);
}

void MainWindow::loadMaterial()
{
	QFileDialog dialog;
	dialog.setFileMode(QFileDialog::Directory); // Set mode to select a directory
	dialog.setWindowTitle("Select a Folder"); // Set dialog title

	// Execute the dialog and get the selected folder
	QString selectedFolder = dialog.getExistingDirectory(nullptr, "Select Folder", QDir::homePath());

	if (!selectedFolder.isEmpty())
	{
		GLWidget* glWidget = ui.openGLWidget;
		//glWidget->loadMaterial();
	}

}