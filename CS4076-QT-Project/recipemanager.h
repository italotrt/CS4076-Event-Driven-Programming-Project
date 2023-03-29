#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include "recipe.h"

class RecipeManager {
private:
    static Recipe recipes[30];

public:
    static void addRecipe(const Recipe& newRecipe);
    static void removeRecipe(const Recipe& delRecipe);
    static void getRecipes();

    ~RecipeManager() {}
};

#endif // RECIPEMANAGER_H
