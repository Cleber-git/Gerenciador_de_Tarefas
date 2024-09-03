#ifndef TIPOTAREFAABSTRATA_H
#define TIPOTAREFAABSTRATA_H

#endif // TIPOTAREFAABSTRATA_H

class TipoTarefaFabrica{


public:
    enum class TAREFA{
        PESSOAL,
        PROFISSIONAL,
        ACADEMICA
    };
    virtual void criarTarefa(TAREFA type);

};
