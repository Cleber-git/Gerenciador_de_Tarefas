#include "contenttask.h"
#include "ui_contenttask.h"

#include <QDebug>

ContentTask::ContentTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContentTask)
{
    ui->setupUi(this);
    m_db.openConection();


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


//    ui->cmb_prioridade->clear();
//    ui->datePrazo->clear();
//    ui->lineTitulo->clear();
//    ui->textCorpo->clear();

    qDebug() <<  m_titulo << m_corpo << m_prazo << m_prioridade;

    m_db.insertInfo(m_titulo, m_corpo, m_prazo, m_prioridade, ui->cmb_type->currentText().toLower());
}

