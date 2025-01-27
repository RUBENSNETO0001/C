#define MAX 100

// Estrutura Aluno
typedef struct {
    char nome[MAX];
    int matricula;
    int codCurso;
    char tipoCurso[MAX];
    int idade;
    float coefMediaGeral; // M�dia geral de todas as notas
} Aluno;

// Estrutura No da Fila
typedef struct No {
    Aluno aluno;
    struct No* prox; // Pr�ximo No da fila
} No;

// Estrutura da Fila
typedef struct {
    No* frente; // primeiro
    No* tras;   // �ltimo
    int tamanho; // Controle do tamanho da fila
} Fila;

// Procedimento para inicializar a fila
void inicializarFila(Fila* fila) {
    fila->frente = NULL;
    fila->tras = NULL;
    fila->tamanho = 0; // Inicializando o tamanho da fila
}

// Fun��o para verificar se a fila est� vazia
int filaVazia(Fila* fila) {
    return fila->frente == NULL;
}

// Procedimento para tratar erros de aloca��o
void verificarAlocacao(void* ponteiro) {
    if (ponteiro == NULL) {
        printf("\nErro de aloca��o de mem�ria!\n");
        exit(1);
    }
}

// Procedimento para enfileirar um aluno
void enfileirar(Fila* fila, Aluno aluno) {
    No* novoNo = (No*)malloc(sizeof(No));
    verificarAlocacao(novoNo);

    novoNo->aluno = aluno;
    novoNo->prox = NULL;

    if (filaVazia(fila)) {
        fila->frente = novoNo; // primeiro
    } else {
        fila->tras->prox = novoNo;
    }

    fila->tras = novoNo; // �ltimo
    fila->tamanho++; // Aumenta o tamanho da fila
    printf("\nNovo aluno enfileirado com sucesso!\n");
}

// Fun��o para desenfileirar um aluno
Aluno desenfileirar(Fila* fila) {
    if (filaVazia(fila)) {
        printf("\nA fila est� vazia!\n");
        exit(1);
    }

    No* temp = fila->frente; // Endere�o do primeiro na fila
    Aluno alunoRemovido = temp->aluno; // Dados do primeiro - struct
    fila->frente = temp->prox;

    if (fila->frente == NULL) {
        fila->tras = NULL;
    }

    free(temp);
    fila->tamanho--; // Diminui o tamanho da fila
    return alunoRemovido;
}

// Procedimento para exibir a fila
void exibirFila(Fila* fila) {
    if (filaVazia(fila)) {
        printf("\nA fila est� vazia!\n");
        return;
    }

    No* atual = fila->frente;
    printf("\nRelat�rio da Fila:");
    while (atual != NULL) {
        Aluno alunoAtual = atual->aluno;
        printf("\n---------------------------");
        printf("\nNome do aluno: %s", alunoAtual.nome);
        printf("\nN�mero da matr�cula: %d", alunoAtual.matricula);
        printf("\nC�digo do curso: %d", alunoAtual.codCurso);
        printf("\nTipo do curso: %s", alunoAtual.tipoCurso);
        printf("\nIdade: %d", alunoAtual.idade);
        printf("\nM�dia geral de notas: %.2f", alunoAtual.coefMediaGeral);
        atual = atual->prox;
    }

    printf("\n---------------------------\n");
}

// Fun��o para buscar na fila por posi��o
void buscarnaFila(Fila* fila, int posicao) {
    if (posicao < 1 || posicao > fila->tamanho) {
        printf("\nPosi��o inv�lida!\n");
        return;
    }

    No* atual = fila->frente;
    int i = 1;
    while (atual != NULL && i < posicao) {
        atual = atual->prox;
        i++;
    }

    if (atual != NULL) {
        printf("\nAluno na posi��o %d:", posicao);
        printf("\nNome: %s", atual->aluno.nome);
        printf("\nMatr�cula: %d", atual->aluno.matricula);
        printf("\nC�digo do Curso: %d", atual->aluno.codCurso);
        printf("\nTipo do Curso: %s", atual->aluno.tipoCurso);
        printf("\nIdade: %d", atual->aluno.idade);
        printf("\nM�dia: %.2f", atual->aluno.coefMediaGeral);
    }
}

// Fun��o para limpar o buffer de entrada
void limparBuffer() {
    while (getchar() != '\n');
}

