#ifndef RECIPE_H
#define RECIPE_H

#include <QString>
#include <QList>

class Recipe {
public:
    Recipe(const QString& name, const QString& description, const QList<QString>& ingredients, const int& calories);

    virtual QString getName() const = 0;
    virtual void setName(const QString& name) = 0;

    virtual QString getDescription() const = 0;
    virtual void setDescription(const QString& description) = 0;

    virtual QList<QString> getIngredients() const = 0;
    virtual void setIngredients(const QList<QString>& ingredients) = 0;
    virtual void addIngredient(const QString& ingredient) = 0;
    virtual void removeIngredient(const QString& ingredient) = 0;

    virtual int getCalories() const = 0;
    virtual void setCalories(int calories) = 0;

    virtual ~Recipe() {}

protected:
    QString rName;
    QString rDescription;
    QList<QString> rIngredients;
    int rCalories;
};


#endif // RECIPE_H
