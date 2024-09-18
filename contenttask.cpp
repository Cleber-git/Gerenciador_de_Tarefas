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
    connect(ui->cmb_type, SIGNAL(currentTextChanged(QString)), this, SLOT(on_changedComboType(QString)));

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
        m_ListCmbDefault.push_back(_comboBox);
        break;
    case TipoTarefaFabrica::TAREFA::PROFISSIONAL:
        m_ListCmbProfissional.push_back(_comboBox);
        break;
    case TipoTarefaFabrica::TAREFA::ACADEMICA:
        m_ListCmbAcademico.push_back(_comboBox);
        break;
    default:
        break;
    }
}

QVector<QComboBox*> ContentTask::getComboBox(TipoTarefaFabrica::TAREFA _typeCombo){
    switch (_typeCombo) {
    case TipoTarefaFabrica::TAREFA::PESSOAL:
        return m_ListCmbDefault;
        break;
    case TipoTarefaFabrica::TAREFA::PROFISSIONAL:
        return m_ListCmbProfissional;
        break;
    case TipoTarefaFabrica::TAREFA::ACADEMICA:
        return m_ListCmbAcademico;
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
        selectComboBox(m_ListCmbDefault);
        break;
    case TipoTarefaFabrica::TAREFA::PROFISSIONAL:
        selectComboBox(m_ListCmbProfissional);
        break;
    case TipoTarefaFabrica::TAREFA::ACADEMICA:
        selectComboBox(m_ListCmbAcademico);
        break;
    default:
        break;
    }
}

void ContentTask::on_changedComboType(QString _type){
    // Usuário escolhe tarefa profissional
    if(_type == "Profissional"){
        if( m_cmbTypeAcademico != nullptr && !m_cmbTypeAcademico->isHidden()){
            m_lblTypeAcademico->hide();
            m_cmbTypeAcademico->hide();
        }
        if(m_lblColaboradores ==  nullptr){
            m_lblColaboradores = new QLabel(this);
            m_lblColaboradores->setText("Qtd colaboradores:");
            qDebug()<< "Criei label colaboradores";

        }
        m_lblColaboradores->move(ui->cmb_prioridade->geometry().x(), ui->cmb_prioridade->geometry().y() + 40);
        if(m_cmbColaboradores == nullptr){
            m_cmbColaboradores = new QComboBox(this);
            m_cmbColaboradores->setObjectName("CombobBox de colaboradores");
            m_ListCmbProfissional.push_back(m_cmbColaboradores);
            qDebug()<< "criei box Colaboradores: " << m_ListCmbProfissional[0]->objectName();
        }
        m_cmbColaboradores->move(m_lblColaboradores->geometry().x(), m_lblColaboradores->geometry().y() + 15);
        m_cmbColaboradores->addItem("1");
        m_cmbColaboradores->addItem("2");
        m_cmbColaboradores->addItem("3");
        m_cmbColaboradores->addItem("4");
        m_cmbColaboradores->addItem("5");

        m_cmbColaboradores->show();
        m_lblColaboradores->show();
        qDebug()<< "final";
    }
    // Usuário escolhe tarefa acadêmica
    else if(_type == "Acadêmico"){

        if(m_cmbColaboradores != nullptr &&  !m_cmbColaboradores->isHidden()){

            m_cmbColaboradores->hide();
            m_lblColaboradores->hide();
            qDebug()<< "entrei aqui";
        }

        if(m_lblTypeAcademico == nullptr){
            m_lblTypeAcademico = new QLabel(this);
            m_lblTypeAcademico->setText("Tipo de curso:");
        }
        m_lblTypeAcademico->move(ui->cmb_prioridade->geometry().x(), ui->cmb_prioridade->geometry().y() + 40);
        if(m_cmbTypeAcademico == nullptr){
            m_cmbTypeAcademico = new QComboBox(this);
            m_ListCmbAcademico.push_back(m_cmbTypeAcademico);
        }
        m_cmbTypeAcademico->move(m_lblTypeAcademico->geometry().x(), m_lblTypeAcademico->geometry().y() + 15);
        m_cmbTypeAcademico->addItem("Colégio");
        m_cmbTypeAcademico->addItem("Faculdade");
        m_cmbTypeAcademico->addItem("Técnico");
        m_cmbTypeAcademico->show();
        m_lblTypeAcademico->show();
    }else if(_type == "Pessoal"){
        qDebug() << "Entrei na pessoal";
        if(!m_ListCmbProfissional[0]->isHidden()){
            m_ListCmbProfissional[0]->hide();
        }
        if(!m_ListCmbAcademico[0]->isHidden()){
            m_ListCmbAcademico[0]->hide();
        }
        if(!m_lblColaboradores->isHidden()){
            m_lblColaboradores->hide();
        }
        if(!m_lblTypeAcademico->isHidden()){
            m_lblTypeAcademico->hide();
        }
    }
}
