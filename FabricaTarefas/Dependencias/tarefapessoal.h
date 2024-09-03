#ifndef TAREFAPESSOAL_H
#define TAREFAPESSOAL_H

#include "tarefa.h"

#include <QString>

class TarefaPessoal: public Tarefa
{
    QString m_infoTarefa;
    QString m_prioridade;
    QString m_dataVencimento;
public:
    TarefaPessoal();
    void setInfoTarefa() override;
    void setPrioridade() override;
    void setDataVencimento() override;
};

#endif // TAREFAPESSOAL_H
