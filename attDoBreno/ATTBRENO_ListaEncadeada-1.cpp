#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//In�cio do clear
void clear(void) {
    printf("\n\n\n");
    system("pause");
    system("cls");
} // Fim do procedimento clear()
// Struct - lista encadeada pessoa
struct pessoa {
    int id;
    char nome[80];
    float peso;
    int idade;
    struct pessoa* prox;
}; // Fim da struct pessoa

typedef struct pessoa Pessoa;

// Fun��o criarLista()
Pessoa* criarLista() {
    return NULL;
} // Fim da fun��o criarLista()

// Fun��o inserirLista() - inserir um novo elemento na lista
Pessoa* inserirLista(Pessoa* p, int novoId, char *novoNome, float novoPeso, int novaIdade) {
    Pessoa* novo = (Pessoa*)malloc(sizeof(Pessoa));
    if (novo == NULL) {
        printf("Erro ao alocar mem�ria! N�o ser� poss�vel inserir novo elemento na lista!\n");
        exit(1);
    }
    novo->id = novoId;
    strcpy(novo->nome, novoNome);
    novo->peso = novoPeso;
    novo->idade = novaIdade;
    novo->prox = p;
    return novo;
} // Fim da fun��o inserirLista()

// Procedimento imprimirLista()
void imprimirLista(Pessoa* p) {
    Pessoa* pe;
    for (pe = p; pe != NULL; pe = pe->prox) {
        printf("\n\n\n\tCadastro de Pessoa");
        printf("\n\nId da pessoa: %d", pe->id);
        printf("\nNome da pessoa: %s", pe->nome);
        printf("\nPeso da pessoa (kg): %.2f", pe->peso);
        printf("\nIdade da pessoa (anos completos): %d", pe->idade);
    }
} // Fim da fun��o imprimirLista()

// Fun��o buscaElemento()
Pessoa* buscaElemento(Pessoa* p, int codBusca) {
    Pessoa* pe;
    for (pe = p; pe != NULL; pe = pe->prox) {
        if (pe->id == codBusca) {
            return pe;
        }
    }
    return NULL;
} // Fim da fun��o buscaElemento()

// Fun��o listaVazia()
int listaVazia(Pessoa* p) {
    return p == NULL; //Verdadeiro ou falso direto
} // Fim da listaVazia()

// Fun��o removerElemento()
Pessoa* removerElemento(Pessoa* p, int codBusca) {
    Pessoa* pe = p;
    Pessoa* ant = NULL;

    while (pe != NULL && pe->id != codBusca) {
        ant = pe;
        pe = pe->prox;
    }

    // Lista est� vazia ou o elemento com codBusca n�o foi localizado
    if (pe == NULL)
        return p;

    // Elemento localizado na lista
    if (ant == NULL) // Elemento removido � o "primeiro"
        p = pe->prox;
    else
        ant->prox = pe->prox;

    free(pe);
    return p;
} // Fim da fun��o removerElemento()

// Fun��o liberarLista()
Pessoa* liberarLista(Pessoa* p) {
    Pessoa* pe = p;
    while (pe != NULL) {
        Pessoa* p1 = pe->prox;
        free(pe);
        pe = p1;
    }
    return NULL;
} // Fim da fun��o liberarLista()

// Fun��o compararListas() - Compara��o com base no id
int compararListas(Pessoa* p1, Pessoa* p2) {
    Pessoa* pe1 = p1;
    Pessoa* pe2 = p2;
    while (pe1 != NULL && pe2 != NULL) {
        if (pe1->id != pe2->id)
            return 0;
        pe1 = pe1->prox;
        pe2 = pe2->prox;
    }
    return pe1 == pe2; // NULL == NULL
} // Fim da fun��o compararListas()

//parte do grupo
//Rubens
int verificarRepeticaoId(Pessoa* p, int id) {
    int count = 0;
    Pessoa* pe;
    for (pe = p; pe != NULL; pe = pe->prox) {
        if (pe->id == id)
            count++;
    }
    return count > 1;
}

int compararRegistros(Pessoa* reg1, Pessoa* reg2, const char* campo) {
    if (strcmp(campo, "id") == 0)
        return reg1->id == reg2->id;
    if (strcmp(campo, "nome") == 0)
        return strcmp(reg1->nome, reg2->nome) == 0;
    if (strcmp(campo, "peso") == 0)
        return reg1->peso == reg2->peso;
    if (strcmp(campo, "idade") == 0)
        return reg1->idade == reg2->idade;

    return 0;
}

Pessoa* ordenarListaPorId(Pessoa* p) {
    if (p == NULL || p->prox == NULL)
        return p;

    Pessoa* atual;
    Pessoa* prox = NULL;
    int trocado;

    do {
        trocado = 0;
        atual = p;

        while (atual->prox != prox) {
            if (atual->id > atual->prox->id) {
                int tempId = atual->id;
                char tempNome[80];
                strcpy(tempNome, atual->nome);
                float tempPeso = atual->peso;
                int tempIdade = atual->idade;

                atual->id = atual->prox->id;
                strcpy(atual->nome, atual->prox->nome);
                atual->peso = atual->prox->peso;
                atual->idade = atual->prox->idade;

                atual->prox->id = tempId;
                strcpy(atual->prox->nome, tempNome);
                atual->prox->peso = tempPeso;
                atual->prox->idade = tempIdade;

                trocado = 1;
            }
            atual = atual->prox;
        }
        prox = atual;
    } while (trocado);

    return p;
}

Pessoa* buscaBinariaPorId(Pessoa* p, int id) {
    Pessoa* temp[100];
    int n = 0, i;
    Pessoa* pe = p;

    while (pe != NULL) {
        temp[n++] = pe;
        pe = pe->prox;
    }

    int inicio = 0, fim = n - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (temp[meio]->id == id)
            return temp[meio];
        else if (temp[meio]->id < id)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return NULL; 
}
//Rubens


//Sarah Lavyne Melo Miranda

// Adicionando funcionalidade para ID auto incrementado
	int proximoId = 1; 
	
	Pessoa* inserirListaComAutoIncrement(Pessoa* p, char *novoNome, float novoPeso, int novaIdade) {
	    Pessoa* novo = (Pessoa*)malloc(sizeof(Pessoa));
	    if (novo == NULL) {
	        printf("Erro ao alocar mem�ria!\n");
	        exit(1);
	    }
	
	    novo->id = proximoId++;
	    strcpy(novo->nome, novoNome);
	    novo->peso = novoPeso;
	    novo->idade = novaIdade;
	    novo->prox = p;
	
	    return novo;
	}
	
	// Fun��o para editar um registro
	void editarRegistro(Pessoa** p, int id) {
    Pessoa* pe = buscaElemento(*p, id);
    if (pe == NULL) {
        printf("Registro com ID %d n�o encontrado.\n", id);
        return;
    }

    printf("Editando o registro com ID %d:\n", id);
    printf("Nome atual: %s. Insira o novo nome (ou pressione Enter para manter): ", pe->nome);
    char novoNome[80];
    fgets(novoNome, sizeof(novoNome), stdin);
    if (novoNome[0] != '\n') {
        novoNome[strcspn(novoNome, "\n")] = '\0'; // Remove o '\n' ao final
        strcpy(pe->nome, novoNome);
    }

    printf("Peso atual: %.2f. Insira o novo peso (ou 0 para manter): ", pe->peso);
    float novoPeso;
    scanf("%f", &novoPeso);
    if (novoPeso > 0) {
        pe->peso = novoPeso;
    }
    printf("Idade atual: %d. Insira a nova idade (ou 0 para manter): ", pe->idade);
    int novaIdade;
    scanf("%d", &novaIdade);
    if (novaIdade > 0) {
        pe->idade = novaIdade;
    }

    printf("Registro atualizado com sucesso!\n");
    clear();
}

// Sistema para n listas
#define MAX_LISTAS 10

Pessoa** listas; // Vetor de ponteiros para listas

void inicializarListas() {
    listas = (Pessoa**)malloc(MAX_LISTAS * sizeof(Pessoa*));
    for (int i = 0; i < MAX_LISTAS; i++) {
        listas[i] = criarLista();
    }
}

void adicionarNaLista(int indice, char* nome, float peso, int idade) {
    if (indice < 0 || indice >= MAX_LISTAS) {
        printf("�ndice de lista inv�lido!\n");
        return;
    }
    listas[indice] = inserirListaComAutoIncrement(listas[indice], nome, peso, idade);
    clear();
}

void imprimirListaPorIndice(int indice) {
    if (indice < 0 || indice >= MAX_LISTAS) {
        printf("�ndice de lista inv�lido!\n");
        return;
    }
    imprimirLista(listas[indice]);
    clear();
}

// Declara��o de fun��es e structs previamente fornecidas...

void exibirMenuPrincipal() {
    printf("\n=== Sistema de Gerenciamento ===\n");
    printf("1. Adicionar pessoa em uma lista\n");
    printf("2. Imprimir uma lista\n");
    printf("3. Editar registro por ID\n");
    printf("4. Buscar pessoa por ID\n");
    printf("5. Remover pessoa por ID\n");
    printf("6. Ordenar lista por ID\n");
    printf("7. Comparar duas listas\n");
    printf("8. Verificar repeti��o de ID\n");
    printf("9. Liberar uma lista\n");
    printf("10. Sair\n");
    printf("Escolha uma op��o: ");
}

int main() {
    setlocale(LC_ALL, ""); // Configura��o para suportar acentua��o
    inicializarListas();   // Inicializa as listas

    int opcao = 0;
    int indiceLista = 0;
    int idBusca = 0;
    char nome[80];
    float peso = 0.0;
    int idade = 0;

    do {
        exibirMenuPrincipal();
        printf("Op��o: ");
        if (scanf("%d", &opcao) != 1) { // Verifica se a entrada � v�lida
            printf("Entrada inv�lida. Tente novamente.\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue;
        }

        switch (opcao) {
            case 1: // Adicionar pessoa em uma lista
                printf("Digite o �ndice da lista (0 a %d): ", MAX_LISTAS - 1);
                if (scanf("%d", &indiceLista) != 1 || indiceLista < 0 || indiceLista >= MAX_LISTAS) {
                    printf("�ndice de lista inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                getchar(); // Limpa o '\n' ap�s o �ndice

                printf("Digite o nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n'

                printf("Digite o peso (kg): ");
                if (scanf("%f", &peso) != 1 || peso <= 0) {
                    printf("Peso inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }

                printf("Digite a idade: ");
                if (scanf("%d", &idade) != 1 || idade <= 0) {
                    printf("Idade inv�lida!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                while (getchar() != '\n'); // Limpa o buffer restante

                adicionarNaLista(indiceLista, nome, peso, idade);
                printf("Pessoa adicionada com sucesso!\n");
                break;

            case 2: // Imprimir uma lista
                printf("Digite o �ndice da lista (0 a %d): ", MAX_LISTAS - 1);
                if (scanf("%d", &indiceLista) != 1 || indiceLista < 0 || indiceLista >= MAX_LISTAS) {
                    printf("�ndice de lista inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                imprimirListaPorIndice(indiceLista);
                break;

            case 3: // Editar registro por ID
                printf("Digite o �ndice da lista (0 a %d): ", MAX_LISTAS - 1);
                if (scanf("%d", &indiceLista) != 1 || indiceLista < 0 || indiceLista >= MAX_LISTAS) {
                    printf("�ndice de lista inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                printf("Digite o ID da pessoa a ser editada: ");
                if (scanf("%d", &idBusca) != 1 || idBusca <= 0) {
                    printf("ID inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                editarRegistro(&listas[indiceLista], idBusca);
                break;

            case 4: // Buscar pessoa por ID
                printf("Digite o �ndice da lista (0 a %d): ", MAX_LISTAS - 1);
                if (scanf("%d", &indiceLista) != 1 || indiceLista < 0 || indiceLista >= MAX_LISTAS) {
                    printf("�ndice de lista inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                printf("Digite o ID da pessoa que deseja buscar: ");
                if (scanf("%d", &idBusca) != 1 || idBusca <= 0) {
                    printf("ID inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                Pessoa* encontrada = buscaElemento(listas[indiceLista], idBusca);
                if (encontrada) {
                    printf("\nPessoa encontrada:\n");
                    printf("ID: %d\n", encontrada->id);
                    printf("Nome: %s\n", encontrada->nome);
                    printf("Peso: %.2f kg\n", encontrada->peso);
                    printf("Idade: %d anos\n", encontrada->idade);
                } else {
                    printf("Pessoa com ID %d n�o encontrada.\n", idBusca);
                }
                break;

            case 5: // Remover pessoa por ID
                printf("Digite o �ndice da lista (0 a %d): ", MAX_LISTAS - 1);
                if (scanf("%d", &indiceLista) != 1 || indiceLista < 0 || indiceLista >= MAX_LISTAS) {
                    printf("�ndice de lista inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                printf("Digite o ID da pessoa a ser removida: ");
                if (scanf("%d", &idBusca) != 1 || idBusca <= 0) {
                    printf("ID inv�lido!\n");
                    while (getchar() != '\n'); // Limpa o buffer
                    break;
                }
                listas[indiceLista] = removerElemento(listas[indiceLista], idBusca);
                printf("Pessoa removida com sucesso!\n");
                break;

            case 10: // Sair
                printf("Encerrando o programa...\n");
                for (int i = 0; i < MAX_LISTAS; i++) {
                    listas[i] = liberarLista(listas[i]);
                }
                free(listas);
                break;

            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 10);

    return 0;
}
