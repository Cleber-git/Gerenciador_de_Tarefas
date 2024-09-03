#ifndef TIPOTAREFAABSTRATA_H
#define TIPOTAREFAABSTRATA_H

#include "tarefaacademica.h"
#include "tarefapessoal.h"
#include "tarefaprofissional.h"

class TipoTarefaFabrica{
public:
    TipoTarefaFabrica();
    enum class TAREFA{
        PESSOAL,
        PROFISSIONAL,
        ACADEMICA
    };
    Tarefa* criarTarefa(TAREFA type);

};
#endif // TIPOTAREFAABSTRATA_H
