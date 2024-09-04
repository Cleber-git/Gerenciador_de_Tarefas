#ifndef DB_ACESS_ABSTRACT_H
#define DB_ACESS_ABSTRACT_H

#include <QString>

class db_abstract{
public:
    virtual void openConection()=0;
    virtual void insertInfo(QString _titulo, QString _corpo, QString _prazo, QString _prioridade, QString _tabela)=0;
    virtual void deleteInfo(QString _titulo, QString _tabela)=0;
    // virtual void updateInfo(QString _titulo, QString _tabela);
};


#endif // DB_ACESS_ABSTRACT_H
