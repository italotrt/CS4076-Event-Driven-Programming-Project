#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include <string>
#include <vector>
#include <QString>

using namespace std;

class RecipeManager
{
public:
  // Constructor
    RecipeManager();

  // Public methods
    void addRecipe(const QString& recipe);
    vector<QString> getRecipes() const;

private:
    vector<QString> recipes;
};

#endif // RECIPEMANAGER_H
