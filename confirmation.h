#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <QDialog>

namespace Ui {
class confirmation;
}

class confirmation : public QDialog
{
    Q_OBJECT

public:
    explicit confirmation(QWidget *parent = nullptr);
    confirmation(QString rName, QString rIngredients,
                 QString rInstruction, QString rCategory, double calories);
    ~confirmation();

private slots:
    void on_closeButton_clicked();

private:
    Ui::confirmation *ui;
};

#endif // CONFIRMATION_H
