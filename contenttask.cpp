#include "contenttask.h"
#include "ui_contenttask.h"

#include <QDebug>

ContentTask::ContentTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContentTask)
{
    ui->setupUi(this);
    m_db.openConection();
    addComboBox(TipoTarefaFabrica::TAREFA::PESSOAL, ui->cmb_type);
    addComboBox(TipoTarefaFabrica::TAREFA::PESSOAL, ui->cmb_prioridade);

}

ContentTask::~ContentTask()
{
    delete ui;
}

void ContentTask::on_btnConcluir_clicked()
{
    m_titulo = ui->lineTitulo->text();
    m_corpo = ui->textCorpo->toPlainText();
    m_prazo = ui->datePrazo->text();
    m_prioridade = ui->cmb_prioridade->currentText();
    if(ui->cmb_type->currentText() == "Pessoal"){
        m_typeOfTask = TipoTarefaFabrica::TAREFA::PESSOAL;
    }else if(ui->cmb_type->currentText() == "Profissional"){
        m_typeOfTask = TipoTarefaFabrica::TAREFA::PROFISSIONAL;
    }else{
        m_typeOfTask = TipoTarefaFabrica::TAREFA::ACADEMICA;
    }

    qDebug() <<  m_titulo << m_corpo << m_prazo << m_prioridade;
    m_db.insertInfo(m_titulo, m_corpo, m_prazo, m_prioridade, ui->cmb_type->currentText().toLower());
}

void ContentTask::addComboBox(TipoTarefaFabrica::TAREFA _typeCombo, QComboBox* _comboBox){
    switch (_typeCombo) {
    case TipoTarefaFabrica::TAREFA::PESSOAL:
        m_cmbDefault.push_back(_comboBox);
        break;
    case TipoTarefaFabrica::TAREFA::PROFISSIONAL:
        m_cmbProfissional.push_back(_comboBox);
        break;
    case TipoTarefaFabrica::TAREFA::ACADEMICA:
        m_cmbAcademico.push_back(_comboBox);
        break;
    default:
        break;
    }
}


QVector<QComboBox*> ContentTask::getComboBox(TipoTarefaFabrica::TAREFA _typeCombo){
    switch (_typeCombo) {
    case TipoTarefaFabrica::TAREFA::PESSOAL:
        return m_cmbDefault;
        break;
    case TipoTarefaFabrica::TAREFA::PROFISSIONAL:
        return m_cmbProfissional;
        break;
    case TipoTarefaFabrica::TAREFA::ACADEMICA:
        return m_cmbAcademico;
        break;
    default:
        break;
    }
}

void ContentTask::selectComboBox(QVector<QComboBox*> _combo){
    for (int i = 0; i < _combo.size(); i++) {
        _combo[i]->show();
    }
}

void ContentTask::showComboBox(TipoTarefaFabrica::TAREFA _typeCombo){
    switch (_typeCombo) {
    case TipoTarefaFabrica::TAREFA::PESSOAL:
        selectComboBox(m_cmbDefault);
        break;
    case TipoTarefaFabrica::TAREFA::PROFISSIONAL:
        selectComboBox(m_cmbProfissional);
        break;
    case TipoTarefaFabrica::TAREFA::ACADEMICA:
        selectComboBox(m_cmbAcademico);
        break;
    default:
        break;
    }
}
// criar lógica para quando o combobox de tipo mudar, a tela se adequar a essa mudança
