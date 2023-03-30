#ifndef RECIPE_H
#define RECIPE_H

#include <QString>

class Recipe {
public:
    Recipe(const QString& name, const QString& ingredients, const QString& instructions,
           const double& calories, const QString& category);

    QString getName();
    void setName(const QString& name);

    QString getIngredients();
    void setIngredients(const QString& ingredients);

    QString getInstructions();
    void setInstructions(const QString& instructions);

    QString getCategory();
    void setCategory(const QString& category);

    int getCalories();
    void setCalories(const double& calories);

    virtual void print();

    virtual ~Recipe() {}

private:
    QString rName;
    QString rIngredients;
    QString rInstructions;
    QString rCategory;
    double rCalories;

friend class RecipeManager;
};

#endif // RECIPE_H
