#ifndef CONTENTTASK_H
#define CONTENTTASK_H

#include <QDialog>
#include <QVector>
#include <QComboBox>
#include <QLabel>

#include "FabricaTarefas/tipotarefafabrica.h"
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
    void addComboBox(TipoTarefaFabrica::TAREFA _typeCombo, QComboBox* _comboBox);
    QVector<QComboBox*> getComboBox(TipoTarefaFabrica::TAREFA _typeCombo);
    void selectComboBox(QVector<QComboBox*> _combo);
    void showComboBox(TipoTarefaFabrica::TAREFA _typeCombo);
private slots:
    void on_btnConcluir_clicked();
public slots:
    void on_changedComboType(QString);
signals:
    void sendType(TipoTarefaFabrica::TAREFA);
private:
    Ui::ContentTask *ui;
    QString m_titulo;
    QString m_corpo;
    QString m_prazo;
    QString m_prioridade;
    TipoTarefaFabrica::TAREFA m_typeOfTask;
    Db_Sqlite &m_db = Db_Sqlite::getInstance();
    QVector<QComboBox*> m_cmbDefault;
    QVector<QComboBox*> m_cmbProfissional;
    QVector<QComboBox*> m_cmbAcademico;
    QLabel *m_lblColaboradores= nullptr;
    QComboBox *m_cmbColaboradores= nullptr;
    QLabel *m_lblTypeAcademico= nullptr;
    QComboBox *m_cmbTypeAcademico= nullptr;

};
#endif // CONTENTTASK_H
