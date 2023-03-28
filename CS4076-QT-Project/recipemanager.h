#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include <QSharedDataPointer>

class RecipeManagerData;

class RecipeManager
{
public:
    RecipeManager();
    RecipeManager(const RecipeManager &);
    RecipeManager &operator=(const RecipeManager &);
    ~RecipeManager();

private:
    QSharedDataPointer<RecipeManagerData> data;
};

#endif // RECIPEMANAGER_H
