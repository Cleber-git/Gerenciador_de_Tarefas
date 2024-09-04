#ifndef TIPOTAREFAABSTRATA_H
#define TIPOTAREFAABSTRATA_H


#include "Dependencias/tarefaacademica.h"
#include "Dependencias/tarefapessoal.h"
#include "Dependencias/tarefaprofissional.h"
#include "tarefa.h"

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
