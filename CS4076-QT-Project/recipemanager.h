#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include "recipe.h"
#include <QVector>
#include <QString>
#include <QFile>
#include <QTextStream>

class RecipeManager {
protected:
    QVector<Recipe> recipes;

public:
    RecipeManager();

    void addRecipe(const Recipe& newRecipe);
    void saveRecipe();

    ~RecipeManager() {}
};

#endif // RECIPEMANAGER_H
