#include "mainwindow.h"
#include "recipemanager.h"
#include <QApplication>

RecipeManager manager = RecipeManager();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w = MainWindow(manager);
    w.show();
    return a.exec();
}
