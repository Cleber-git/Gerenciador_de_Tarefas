#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(m_switchType, SIGNAL(sendTypeTask(QString)), this, SLOT(on_receive_typeTask(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m_switchType->show();
    // Inputar lógica de criação da tarefa. Se é: 1- Pessoal || 2- Profissional || 3- Acadêmica
    // Configurar prioridade: 1- Urgente || 2- Alerta || 3- Comum
    // Definir prazos de conclusão e alocar como "Atrasados" os que já tiverem passado da data
}

void MainWindow::on_receive_typeTask(QString _TypeTask){
    m_typeOfTask = _TypeTask;
    qDebug() << "Received: " << _TypeTask;
    if(m_typeOfTask == "Pessoal"){
        m_tarefa = m_tipoTarefaFabrica.criarTarefa(TipoTarefaFabrica::TAREFA::PESSOAL);
    }else if(m_typeOfTask == "Profissional"){
        m_tarefa = m_tipoTarefaFabrica.criarTarefa(TipoTarefaFabrica::TAREFA::PROFISSIONAL);
    }else{
        m_tarefa = m_tipoTarefaFabrica.criarTarefa(TipoTarefaFabrica::TAREFA::ACADEMICA);
    }
}
