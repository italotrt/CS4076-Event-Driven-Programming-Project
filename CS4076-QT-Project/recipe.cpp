#include<QDebug>
#include "recipe.h"

using namespace std;

Recipe::Recipe(const QString& name, const QString& description, const QString& ingredients, const int& calories)
 : rName(name), rDescription(description), rCalories(calories)
{

}

QString Recipe::getName() {
    return rName;
}

void Recipe::setName(const QString& name) {
    rName = name;
}

QString Recipe::getDescription() {
    return rDescription;
}

void Recipe::setDescription(const QString& description) {
    rDescription = description;
}

QString Recipe::getIngredients() {
    return rIngredients;
}

void Recipe::setIngredients(const QString& ingredients) {
    rIngredients = ingredients;
}

int Recipe::getCalories() {
    return rCalories;
}

void Recipe::setCalories(const int& calories) {
    rCalories = calories;
}

void Recipe::print() {
    qDebug() << "Recipe";
    qDebug() << "Name" << getName();
    qDebug() << "Description" << getDescription();
    qDebug() << "Calories" << getCalories();
}
