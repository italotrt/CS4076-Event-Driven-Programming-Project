#include "mainwindow.h"
#include "recipemanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    RecipeManager manager = RecipeManager();
    QApplication a(argc, argv);
    MainWindow w = MainWindow(manager);
    w.show();
    return a.exec();
}
