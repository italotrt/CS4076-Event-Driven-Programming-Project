#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Book");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_addButton_clicked()
{
    addRecipeWindow = new AddRecipeWindow(this);
    addRecipeWindow->show();
}


void MainWindow::on_quitButton_clicked()
{
    exit(0);
}

