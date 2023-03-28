#ifndef RECIPEWINDOW_H
#define RECIPEWINDOW_H

#include <QDialog>

namespace Ui {
class RecipeWindow;
}

class RecipeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RecipeWindow(QWidget *parent = nullptr);
    ~RecipeWindow();

private:
    Ui::RecipeWindow *ui;
};

#endif // RECIPEWINDOW_H
