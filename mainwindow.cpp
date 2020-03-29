#include <QFileDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//
// When the Open menu option is clicked
//
void MainWindow::openClicked()
{
    QString string;
    string = QFileDialog::getOpenFileName(this, tr("Open WAD"), QString(), tr("WAD files (*.wad)"));
    // TODO: load the file
}
