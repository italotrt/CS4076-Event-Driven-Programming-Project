#include "recipemanager.h"

class RecipeManagerData : public QSharedData
{
public:

};

RecipeManager::RecipeManager() : data(new RecipeManagerData)
{

}

RecipeManager::RecipeManager(const RecipeManager &rhs)
    : data{rhs.data}
{

}

RecipeManager &RecipeManager::operator=(const RecipeManager &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

RecipeManager::~RecipeManager()
{

}
