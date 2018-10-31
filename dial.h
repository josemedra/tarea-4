#ifndef DIAL_H
#define DIAL_H

#include <QDialog>

namespace Ui {
class Dial;
}

class Dial : public QDialog
{
    Q_OBJECT

public:
    explicit Dial(QWidget *parent = nullptr);
    ~Dial();

   QString getname();             //Declaracion metodo obtener nombre
   QString getlevel();            //Declaracion metodo obtener nivel academico
   QString getsubject();          //Declaracion metodo obtener materia
   QString getwork_contract();    //Declaracion metodo obtener tipo de contrato
   double getscore();             //Declaracion metodo obtener puntaje
   int getage();                  //Declaracion metodo obtener edad



private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Dial *ui;
};

#endif // DIAL_H
