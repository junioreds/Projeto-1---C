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
int cadastrarTarefas(ListaDeTarefas *lt);
int listarTarefas(ListaDeTarefas lt);
int deletarTarefas();
int salvarTarefas();
