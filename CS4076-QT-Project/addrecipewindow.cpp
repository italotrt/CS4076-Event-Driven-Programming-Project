#include "addrecipewindow.h"
#include "ui_addrecipewindow.h"

AddRecipeWindow::AddRecipeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecipeWindow)
{
    ui->setupUi(this);
}

AddRecipeWindow::~AddRecipeWindow()
{
    delete ui;
}
