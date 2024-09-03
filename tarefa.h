#ifndef TAREFA_H
#define TAREFA_H

class Tarefas{
public:
    // Método virtual puro que define o assunto da tarefa
    virtual void temaDaTarefa()=0;
    virtual void corpoDaTarefa()=0;

};


#endif // TAREFA_H
