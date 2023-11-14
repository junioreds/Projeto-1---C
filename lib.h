typedef struct{
    int prioridade;
    char descricao[300];
    char categoria[100];
} Tarefa;

typedef struct {
    Tarefa tarefas[100];
    int qtd;
} ListaDeTarefas;

int Menu();
int cadastrarTarefas();
int listarTarefas();
int deletarTarefas();
int salvarTarefas();
