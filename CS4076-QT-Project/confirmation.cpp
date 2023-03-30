#include "confirmation.h"
#include "recipe.h"
#include "recipemanager.h"
#include "ui_confirmation.h"

confirmation::confirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmation)
{
    ui->setupUi(this);
}

confirmation::confirmation(QString rName, QString rIngredients,
                           QString rInstruction, QString rCategory,
                           double calories) :
    ui(new Ui::confirmation)
{

    RecipeManager manager;
    ui->setupUi(this);
    this->setWindowTitle("Your Recipe");
    ui->nameLabel->setText(rName);
    ui->ingredientsLabel->setText(rIngredients);
    ui->instructionLabel->setText(rInstruction);
    ui->categoryLabel->setText(rCategory);
    ui->caloriesDoubleSpinBox->setValue(calories);

    Recipe newRecipe = Recipe(rName, rIngredients, rInstruction, calories, rCategory);
    // manager.addRecipe(newRecipe);
    manager.saveRecipe(newRecipe);
}


//, QString rName, QString rIngredients, QString rInstruction, QString rCategory, double rCalories
confirmation::~confirmation()
{
    delete ui;
}

void confirmation::on_closeButton_clicked()
{
    this->close();
}
