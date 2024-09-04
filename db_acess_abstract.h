#ifndef DB_ACESS_ABSTRACT_H
#define DB_ACESS_ABSTRACT_H

#include <QString>

class db_abstract{
public:
    virtual void openConection();
    virtual void insertInfo(QString _titulo, QString _corpo, QString _prazo, QString _prioridade);
    virtual void deleteInfo(QString _titulo);
};

#endif // DB_ACESS_ABSTRACT_H
