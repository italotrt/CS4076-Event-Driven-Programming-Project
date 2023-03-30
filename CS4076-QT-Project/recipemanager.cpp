#include "recipemanager.h"

RecipeManager::RecipeManager() {

}

void RecipeManager::addRecipe(const Recipe& newRecipe) {
    recipes.append(newRecipe);
}

void RecipeManager::saveRecipe() {
    QFile file("/Users/italo/Documents/UL/Semester 4/CS4076 - Event Driven Programming/RecipeBook/recipes.txt");
    QTextStream out(&file);

    file.open(QIODevice::Append | QIODevice::Text);

    for (int i = 0; i < recipes.size(); i++) {
        out << "Recipe's Title:\n" << recipes[i].getName() << "\n\n";
        out << "Ingredients:\n" << recipes[i].getIngredients() << "\n\n";
        out << "Instructions:\n" << recipes[i].getInstructions() << "\n\n";
        out << "Category: " << recipes[i].getCategory() << "\n\n";
        out << "Calories: " << recipes[i].getCalories() << "\n";
    }

    out.flush();
    file.close();
}
