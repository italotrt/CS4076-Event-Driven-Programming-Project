#include "addrecipewindow.h"
#include "ui_addrecipewindow.h"

AddRecipeWindow::AddRecipeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecipeWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Create Recipe");
}

AddRecipeWindow::~AddRecipeWindow()
{
    delete ui;
}

void AddRecipeWindow::on_cancelButton_clicked()
{
    this->close();
}
