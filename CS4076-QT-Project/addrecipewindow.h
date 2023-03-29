#ifndef ADDRECIPEWINDOW_H
#define ADDRECIPEWINDOW_H

#include <QDialog>

namespace Ui {
class AddRecipeWindow;
}

class AddRecipeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddRecipeWindow(QWidget *parent = nullptr);
    ~AddRecipeWindow();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::AddRecipeWindow *ui;
};

#endif // ADDRECIPEWINDOW_H
