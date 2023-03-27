#include "recipemanager.h"
#include <string>
#include <vector>

using namespace std;

RecipeManager::RecipeManager() {
    // Initialize any necessary variables
}

void RecipeManager::addRecipe(const QString& item) {
    recipes.push_back(item);
}

vector<QString> RecipeManager::getRecipes() const {
    return recipes;
}
