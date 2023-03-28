#include "recipewindow.h"
#include "ui_recipewindow.h"

RecipeWindow::RecipeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipeWindow)
{
    ui->setupUi(this);
}

RecipeWindow::~RecipeWindow()
{
    delete ui;
}
