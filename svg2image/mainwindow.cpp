#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtGui>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSelectSVGFiles()
{
    
}

void MainWindow::onSelectColor()
{

}

void MainWindow::onSelectTargetDirectory()
{
    QString dir = QFileDialog::getExistingDirectory(this, "选择目的文件夹",
                                                    QDir::homePath(),
                                                    QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);
    ui->leTargetDirectory->setText(dir);
}

void MainWindow::onTransfer()
{
    
}

