#include <QDebug>
#include "recipe.h"

Recipe::Recipe(const QString& name, const QString& ingredients, const QString& instructions,
               const double& calories, const QString& category)
 : rName(name), rCalories(calories), rIngredients(ingredients), rInstructions(instructions), rCategory(category)
{

}

QString Recipe::getName() {
    return rName;
}

void Recipe::setName(const QString& name) {
    rName = name;
}

QString Recipe::getIngredients() {
    return rIngredients;
}

void Recipe::setIngredients(const QString& ingredients) {
    rIngredients = ingredients;
}

QString Recipe::getInstructions() {
    return rInstructions;
}

void Recipe::setInstructions(const QString& instructions) {
    rInstructions = instructions;
}

QString Recipe::getCategory() {
    return rCategory;
}

void Recipe::setCategory(const QString& category) {
    rCategory = category;
}

int Recipe::getCalories() {
    return rCalories;
}

void Recipe::setCalories(const double& calories) {
    rCalories = calories;
}

void Recipe::print() {
    qDebug() << "Recipe";
    qDebug() << "Name: " << getName();
    qDebug() << "Ingredients: " << getIngredients();
    qDebug() << "Instructions: " << getInstructions();
    qDebug() << "Category: " << getCategory();
    qDebug() << "Calories: " << getCalories();
}
