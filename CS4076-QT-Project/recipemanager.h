#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include "recipe.h"
#include <QVector>
#include <QString>
#include <QFile>
#include <QTextStream>

class RecipeManager {
public:
    RecipeManager();

    void addRecipe(const Recipe& newRecipe);
    void removeRecipe(Recipe& delRecipe);
    void saveRecipe();

    ~RecipeManager();

protected:
    QVector<Recipe> recipes;
};

#endif // RECIPEMANAGER_H
