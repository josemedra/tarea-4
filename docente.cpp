#include "docente.h"
#include <QString>

docente::docente()
{
}

    QString docente::getname()
    {
        return name;

    }

    int docente::getage()
    {

        return age;
    }

    QString docente::getlevel()
    {

       return level;
    }

    QString docente::getsubject()
    {

        return subject;
    }

    double docente::getscore()
    {
      return score;

    }

    QString docente::getwork_contract()
    {
      return contract;
    }

    void docente::setname(QString name_)
    {
       name=name_;

    }

    void docente::setlevel(QString level_)
    {
       level=level_;

    }

    void docente::setsubject(QString subject_)
    {
       subject=subject_;

    }

    void docente::setcontract(QString contract_)
    {
       contract=contract_;

    }

    void docente::setscore(double score_)
    {
       score=score_;

    }

    void docente::setage(int age_)
    {
       age=age_;

    }
