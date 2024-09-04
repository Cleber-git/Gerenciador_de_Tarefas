#include "db/db_sqlite.h"
#include "db/abstract/db_acess_abstract.h"

#include <QApplication>
#include <QDebug>

Db_Sqlite *Db_Sqlite::instance = nullptr;

Db_Sqlite &Db_Sqlite::getInstance(){
    if(instance == nullptr){
        instance = new Db_Sqlite();
    }
    return (*instance);
}

void Db_Sqlite::openConection(){
    if(m_db.isOpen()) return;
    QString path = qApp->applicationDirPath() + "/tarefas.db";
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if(!m_db.open()){
        qDebug()<< "Base de dados não abriu";
        return;
    }
    qDebug()<< "Base de dados aberta";
}

void Db_Sqlite::insertInfo(QString _titulo, QString _corpo, QString _prazo, QString _prioridade, QString _tabela){
    QSqlQuery query(m_db);
    QString sql  = QString("INSERT INTO %1 titulo, corpo, prazo, prioridade VALUES :titulo, :corpo, :prazo, :prioridade").arg(_tabela);

    query.prepare(sql);
    query.bindValue(":titulo", _titulo);
    query.bindValue(":corpo", _corpo);
    query.bindValue(":prazo", _prazo);
    query.bindValue(":prioridade", _prioridade);

    if(!query.exec()){
        qDebug() << "Query insertInfo não foi executada: " << query.lastError();
        return;
    }
}

void Db_Sqlite::deleteInfo(QString _titulo, QString _tabela){
    QSqlQuery query;
    QString sql  = QString("delete * from %1 where titulo=:titulo").arg(_tabela);

    query.prepare(sql);
    query.bindValue(":titulo", _titulo);

    if(!query.exec()){
        qDebug() << "Query deleteInfo não foi executada";
        return;
    }
}
