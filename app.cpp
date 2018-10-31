#include "app.h"
#include "ui_app.h"
#include "dial.h"
#include <QString>
#include <vector>
#include "docente.h"

using namespace std;

App::App(QWidget *parent):
    QWidget(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);
    setWindowTitle("FORMULARIO PROFESORES");
    QStringList columnas;
    columnas <<"Nombre"<<"Edad"<<"Materia"<<"Nivel"<<"Puntaje"<<"Tipo Contrato";
    ui->Information->setColumnCount(6);
    ui->Information->setHorizontalHeaderLabels(columnas);

}

App::~App()
{
    delete ui;
}

void App::on_pushButton_clicked()
{
    int resultado;
    int fila;

    Dial objeto(this);
    objeto.setWindowTitle("CAPTURAR DATOS");
    resultado = objeto.exec();

    if (resultado == QDialog::Rejected)
        return;

    docente nuevo;                                     //objeto
    nuevo.setname(objeto.getname());
    nuevo.setlevel(objeto.getlevel());
    nuevo.setsubject(objeto.getsubject());
    nuevo.setcontract(objeto.getwork_contract());
    nuevo.setscore(objeto.getscore());
    nuevo.setage(objeto.getage());


    docentes.push_back(nuevo);

    ui->Information->setRowCount(0);


    for(int i=0;i<docentes.size();i++)
    {
        ui->Information->insertRow(ui->Information->rowCount());
        fila= ui->Information->rowCount()-1;

         ui->Information->setItem(fila,0,new QTableWidgetItem(docentes[i].getname()));
         ui->Information->setItem(fila,1,new QTableWidgetItem(docentes[i].getlevel()));
         ui->Information->setItem(fila,2,new QTableWidgetItem(docentes[i].getsubject()));
         ui->Information->setItem(fila,3,new QTableWidgetItem(docentes[i].getwork_contract()));
         ui->Information->setItem(fila,4,new QTableWidgetItem(QString::number(docentes[i].getscore())));
         ui->Information->setItem(fila,5,new QTableWidgetItem(QString::number(docentes[i].getage())));
    }

}
