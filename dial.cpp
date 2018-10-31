#include "dial.h"
#include "ui_dial.h"
#include <QString>

Dial::Dial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dial)
{
    ui->setupUi(this);
}

Dial::~Dial()
{
    delete ui;
}

void Dial::on_buttonBox_accepted()
{
    accept();                           //Accion para boton OK
}

void Dial::on_buttonBox_rejected()
{
    reject();                           // Accion para boton Cancel
}

QString Dial::getname()
{
    return ui->nombre->text();         // Accion para obtener el nombre ingresado

}

int Dial::getage()
{

    return ui->age->value();           // Accion para obtener la edad ingresada
}

QString Dial::getlevel()
{

   return ui->level->currentText();    //Accion para obtener el nivel academico seleccionada
}

QString Dial::getsubject()
{

    return ui->subjet->currentText();     // Accion para obtener la materia seleccionada
}

double Dial::getscore()
{
  return ui->score->value();             //Accion para obtener el puntaje

}

QString Dial::getwork_contract()        //Accion para 1 de 3 opciones de tipo de contrato
{
  if (ui->radioButton->isChecked())
      return ui->radioButton->text();
  else if (ui->radioButton_2->isChecked())
      return ui->radioButton_2->text();
  else if (ui->radioButton_3->isChecked())
      return ui->radioButton_3->text();

  else
  return 0;
}
