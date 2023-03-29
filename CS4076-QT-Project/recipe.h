#ifndef RECIPE_H
#define RECIPE_H

#include "recipemanager.h"
#include <QString>

class Recipe {
public:
    Recipe(const QString& name, const QString& description, const QString& ingredients, const int& calories);

    QString getName();
    void setName(const QString& name);

    QString getDescription();
    void setDescription(const QString& description);

    QString getIngredients();
    void setIngredients(const QString& ingredients);

    int getCalories();
    void setCalories(const int& calories);

    virtual void print();

    virtual ~Recipe() {}

private:
    QString rName;
    QString rDescription;
    QString rIngredients;
    int rCalories;

friend class RecipeManager;
};

#endif // RECIPE_H
