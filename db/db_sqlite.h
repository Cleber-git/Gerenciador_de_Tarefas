#ifndef DB_SQLITE_H
#define DB_SQLITE_H


#include "db/abstract/db_acess_abstract.h"

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>

class Db_Sqlite: public db_abstract
{
    static Db_Sqlite* instance;
public:
    static Db_Sqlite &getInstance();
    void openConection()override;
    void insertInfo(QString _titulo, QString _corpo, QString _prazo, QString _prioridade, QString _tabela)override;
    void deleteInfo(QString _titulo, QString _tabela)override;

private:
    QSqlDatabase m_db;
};

#endif // DB_SQLITE_H
