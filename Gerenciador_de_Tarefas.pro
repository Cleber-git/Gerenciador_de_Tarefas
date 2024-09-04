QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
DESTDIR += bin
TARGET = GerenciadorDeTarefas

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    contenttask.cpp \
    db/db_sqlite.cpp \
    main.cpp \
    mainwindow.cpp \
    switchthetypetask.cpp \
    FabricaTarefas/Dependencias/tarefaacademica.cpp \
    FabricaTarefas/Dependencias/tarefapessoal.cpp \
    FabricaTarefas/Dependencias/tarefaprofissional.cpp \
    FabricaTarefas/tipotarefafabrica.cpp

HEADERS += \
    contenttask.h \
    db/abstract/db_acess_abstract.h \
    db/db_sqlite.h \
    db/abstract/db_acess_abstract.h  \
    mainwindow.h \
    switchthetypetask.h \
    FabricaTarefas/Dependencias/tarefa.h \
    FabricaTarefas/Dependencias/tarefaprofissional.h \
    FabricaTarefas/Dependencias/tarefapessoal.h \
    FabricaTarefas/Dependencias/tarefaacademica.h \
    FabricaTarefas/tipotarefafabrica.h

FORMS += \
    contenttask.ui \
    mainwindow.ui \
    switchthetypetask.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rsc.qrc
