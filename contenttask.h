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

    /**
     * @brief addComboBox
     * Método destinado à agrupar comboBox em uma lista que vai ser especificada
     * de acordo com o parâmetro _typeCombo.
     *
     * @param _typeCombo
     * @param _comboBox
     */
    void addComboBox(TipoTarefaFabrica::TAREFA _typeCombo, QComboBox* _comboBox);

    /**
     * @brief getComboBox
     * Método acessor getter responsável por retornar a lista de comboBox's
     * referente ao tipo de tarefa passado por parâmetro.
     * @param _typeCombo
     * @return
     */
    QVector<QComboBox*> getComboBox(TipoTarefaFabrica::TAREFA _typeCombo);

    /**
     * @brief selectComboBox
     * Método destinado à mostrar na tela comboBox's de uma lista que vai ser
     * fornecida por parâmetro
     * @param _combo
     */
    void selectComboBox(QVector<QComboBox*> _combo);

    /**
     * @brief showComboBox
     * Método responsável por fazer a verificação de qual combobox vai aparecer
     * de acordo com o tipo de tarefa fornecido por parâmetro.
     * @param _typeCombo
     */
    void showComboBox(TipoTarefaFabrica::TAREFA _typeCombo);
private slots:

    /**
   * @brief on_btnConcluir_clicked
   * Slot privado responsável por definir qual o tipo de tarefa de acordo com oque foi
   * escolhido no combobox de tipo. E guardar todas as informações no banco de
   * dados
   */
    void on_btnConcluir_clicked();
public slots:
    /**
   * @brief on_changedComboType
   * Slot público responsável por gerenciar e escolher qual combobox será
   * exibida na tela conforme o tipo da tarefa mude.
   *
   */
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
    QVector<QComboBox*> m_ListCmbDefault;
    QVector<QComboBox*> m_ListCmbProfissional;
    QVector<QComboBox*> m_ListCmbAcademico;
    QLabel *m_lblColaboradores= nullptr;
    QComboBox *m_cmbColaboradores= nullptr;
    QLabel *m_lblTypeAcademico= nullptr;
    QComboBox *m_cmbTypeAcademico= nullptr;

};
#endif // CONTENTTASK_H
