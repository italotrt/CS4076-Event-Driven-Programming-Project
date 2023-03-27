#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recipemanager.h"
#include <string>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    // Create a new instance of the recipe manager
    RecipeManager storageSystem;

    // Add some items to the recipe manager
    storageSystem.addRecipe("Item 1");
    storageSystem.addRecipe("Item 2");

    // Retrieve the items from the recipe manager and display them
    vector<QString> items = storageSystem.getRecipes();

    for (const auto& item : items) {
        ui->listWidget->addRecipe(item);
    }
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

