#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include "recipe.h"
#include <QVector>
#include <QString>
#include <QSaveFile>
#include <QTextStream>

class RecipeManager {
protected:
    QVector<Recipe> recipes;

public:
    RecipeManager() {}

    void addRecipe(const Recipe& newRecipe) {
        recipes.append(newRecipe);
    }

    /*
    static void removeRecipe(const Recipe& delRecipe) {
        recipes.removeOne(delRecipe);
    }
    */

    void saveRecipe(const Recipe& sRecipe) {
        QSaveFile file("recipes.txt");

        if (!file.open(QIODevice::WriteOnly)) {
           qWarning("Could not open file for writing");
           return;
        }

        QTextStream out(&file);
        for (int i = 0; i < recipes.size(); ++i) {
           out << "Recipe's Title: " << recipes[i].getName() << "\n";
           out << "Ingredients: " << recipes[i].getIngredients() << "\n";
           out << "Category: " << recipes[i].getCategory() << "\n";
           out << "Calories: " << recipes[i].getCalories() << "\n";
        }

        if (!file.commit()) {
           qWarning("Could not commit changes to file");
        }
    }

    // static QString getRecipes();

    ~RecipeManager() {}
};

#endif // RECIPEMANAGER_H
