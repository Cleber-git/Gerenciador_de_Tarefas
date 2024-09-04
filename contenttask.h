#ifndef CONTENTTASK_H
#define CONTENTTASK_H

#include <QDialog>
#include <QMutex>

#include "db/db_sqlite.h"

namespace Ui {
class ContentTask;
}

class ContentTask : public QDialog
{
    Q_OBJECT

public:
    explicit ContentTask(QWidget *parent = nullptr);
    ~ContentTask();

private slots:
    void on_btnConcluir_clicked();

private:
    Ui::ContentTask *ui;
    QString m_titulo;
    QString m_corpo;
    QString m_prazo;
    QString m_prioridade;
    Db_Sqlite &m_db = Db_Sqlite::getInstance();
};

#endif // CONTENTTASK_H
