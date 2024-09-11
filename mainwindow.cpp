#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "FabricaTarefas/tipotarefafabrica.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(m_contentTask, SIGNAL(sendType(QString)), this, SLOT());

    m_tipoTarefaFabrica = new TipoTarefaFabrica();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m_contentTask->show();
    // Inputar lógica de criação da tarefa. Se é: 1- Pessoal || 2- Profissional || 3- Acadêmica
    // Configurar prioridade: 1- Urgente || 2- Alerta || 3- Comum
    // Definir prazos de conclusão e alocar como "Atrasados" os que já tiverem passado da data
}

void MainWindow::receiveType(TipoTarefaFabrica::TAREFA _type){
     m_tipoTarefaFabrica->criarTarefa(_type);
}
