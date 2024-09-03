#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Inputar lógica de criação da tarefa. Se é: 1- Pessoal || 2- Profissional || 3- Acadêmica
    // Configurar prioridade: 1- Urgente || 2- Alerta || 3- Comum
    // Definir prazos de conclusão e alocar como "Atrasados" os que já tiverem passado da data
}

