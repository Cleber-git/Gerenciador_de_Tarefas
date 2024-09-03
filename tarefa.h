#ifndef TAREFA_H
#define TAREFA_H

class Tarefa
{
public:
    virtual void setInfoTarefa()=0;
    virtual void setPrioridade()=0;
    virtual void setDataVencimento()=0;
};

#endif // TAREFA_H
