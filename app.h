#ifndef APP_H
#define APP_H

#include <QWidget>
#include "docente.h"
#include <vector>

using namespace std;

namespace Ui {
class App;
}

class App : public QWidget
{
    Q_OBJECT

public:
    explicit App(QWidget *parent = nullptr);
    ~App();

private slots:
    void on_pushButton_clicked();

private:
    Ui::App *ui;
    vector <docente>docentes;
};

#endif // APP_H
