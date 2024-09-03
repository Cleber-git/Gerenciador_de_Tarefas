#ifndef TAREFAPROFISSIONAL_H
#define TAREFAPROFISSIONAL_H

#include <QString>
#include "tarefa.h"

class TarefaProfissional: public Tarefa
{
    QString m_infoTarefa;
    QString m_prioridade;
    QString m_dataVencimento;
public:
    TarefaProfissional();
    void setInfoTarefa() override;
    void setPrioridade() override;
    void setDataVencimento() override;
};

#endif // TAREFAPROFISSIONAL_H
