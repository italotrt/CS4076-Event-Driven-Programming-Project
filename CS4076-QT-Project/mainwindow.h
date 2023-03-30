#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recipemanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(RecipeManager Manager);
    ~MainWindow();

private slots:
    void on_addButton_clicked();

    void on_quitButton_clicked();

    void on_breakfastRB_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    RecipeManager mRM;
};
#endif // MAINWINDOW_H
