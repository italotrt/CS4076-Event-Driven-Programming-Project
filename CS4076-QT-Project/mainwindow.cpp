#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "confirmation.h"
#include "recipemanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Creator");
}

MainWindow::MainWindow(RecipeManager manager)
    : mRM(manager)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe Creator");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_addButton_clicked()
{
    bool bf = ui->breakfastRB->isChecked();
    bool lun = ui->lunchRB->isChecked();
    bool din = ui->dinnerRB->isChecked();
    bool des = ui->dessertRB->isChecked();
    bool veg = ui->vegetarianRB->isChecked();

    QString rCat;

    if(bf) rCat = "Breakfast Recipe";
    if(lun) rCat = "Lunch Recipe";
    if(din) rCat = "Dinner Recipe";
    if(des) rCat = "Dessert Recipe";
    if(veg) rCat = "Vegetarian Recipe";

    confirmation *confWindow = new confirmation(ui->textEdit->toPlainText(),
                                                ui->ingredientsTextEdit->toPlainText(),
                                                ui->instructionsTextEdit->toPlainText(),
                                                rCat,
                                                ui->caloriesDoubleSpinBox->value(),
                                                mRM);
    confWindow->setModal(true);
    confWindow->exec();
    ui->textEdit->clear();
    ui->instructionsTextEdit->clear();
    ui->ingredientsTextEdit->clear();
    ui->caloriesDoubleSpinBox->setValue(0);
    delete confWindow;
}

void MainWindow::on_quitButton_clicked()
{
    exit(0);
}


void MainWindow::on_breakfastRB_toggled(bool checked)
{

}

