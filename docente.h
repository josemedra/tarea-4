#ifndef DOCENTE_H
#define DOCENTE_H
#include <QString>

class docente
{
private:
    QString name;           // Variable Nombre
    QString level;          // Variable Nivel academico
    QString subject;        // Variable Materia
    QString contract;       // Variable tipo de contrato
    double score;           // Variable puntaje
    int age;                // Variable edad




public:

    QString getname();                  // Declaracion metodo obtener nombre
    QString getlevel();                 // Declaracion metodo obtener nivel academico
    QString getsubject();               // Declaracion metodo obtener materia
    QString getwork_contract();         // Declaracion metodo obtener tipo de contrato
    double getscore();                  // Declaracion metodo obtener puntaje
    int getage();                       // Declaracion metodo obtener edad

    void setname(QString name_);            //Declaracion metodo Set para nombre
    void setlevel(QString level_);          //Declaracion metodo Set para nivel academico
    void setsubject(QString subject_);      //Declaracion metodo Set para materia
    void setcontract(QString contract_);    //Declaracion metodo Set para tipo de contrato
    void setscore(double score_);           //Declaracion metodo Set para puntaje
    void setage(int age_);                  //Declaracion metodo Set para edad



    docente();
};

#endif // DOCENTE_H
