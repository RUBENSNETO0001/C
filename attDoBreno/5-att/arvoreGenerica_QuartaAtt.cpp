#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Árvore genérica

//Procedimento clear()
void clear (void) {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do procedimento clear()

//Estrutura no
typedef struct No {
	int chave;
	struct No* primeiroFilho; //"Perspectiva vertical" - camadas inferiores
	struct No* proximoIrmao; //"Perspectiva horizontal" - mesma camada
} No;//Fim da estrutura no

//Função criarNo()
No* criarNo(int chave) {
	No* novoNo = (No*) (malloc(sizeof(No)));
	if (novoNo == NULL) {
		printf ("\n\nErro na tentativa de alocar memória!");
		clear();
		exit(1); //return NULL;
	}
	novoNo->chave = chave;
	novoNo->primeiroFilho = NULL;
	novoNo->proximoIrmao = NULL;
	return novoNo;
}//Fim da função criarNo()

//Procedimento inserirFilho()
void inserirFilho(No* pai, int chave) {
	if (pai == NULL)
		return;
	
	No* novoNo = criarNo(chave);
	if (pai->primeiroFilho == NULL) {
		pai->primeiroFilho = novoNo;
	}
	else {
		No* temp = pai->primeiroFilho;
		while (temp->proximoIrmao != NULL) {
			temp = pai->proximoIrmao;
		}
		temp->primeiroFilho = novoNo;
	}
}//Fim do procedimento inserirFilho()

//Função buscarNo()
No* buscarNo(No* raiz, int chave) {
	if (raiz == NULL)
		return NULL;
	
	if (raiz->chave == chave)
		return raiz;
		
	No* encontrado = buscarNo(raiz->primeiroFilho, chave);
	if (encontrado)
		return encontrado;
	
	return buscarNo(raiz->proximoIrmao, chave);	
}//Fim da função buscarNo()

//Função removerNo() - remove nó e seus filhos
No* removerNo(No* raiz, int chave) {
    if (raiz == NULL)
        return NULL;

    if (raiz->chave == chave) {
        No* primeiroFilho = raiz->primeiroFilho;
        No* proximoIrmao = raiz->proximoIrmao;
        free(raiz);
        
        if (primeiroFilho) {
            No* temp = primeiroFilho;
            while (temp->proximoIrmao != NULL) {
                temp = temp->proximoIrmao;
            }
            temp->proximoIrmao = proximoIrmao;
            return primeiroFilho;
        }
        return proximoIrmao;
    }

    raiz->primeiroFilho = removerNo(raiz->primeiroFilho, chave);
    raiz->proximoIrmao = removerNo(raiz->proximoIrmao, chave);
    return raiz;
}


//Procedimento perPosOrdem()
void perPosOrdem (No* raiz) {
	if (raiz == NULL)
		return;
	perPosOrdem(raiz->primeiroFilho);
	printf ("%d ", raiz->chave);
	perPosOrdem(raiz->proximoIrmao);
}//Fim do procedimento perPosOrdem()

//Procedimento perPreOrdem()
void perPreOrdem (No* raiz) {
	if (raiz == NULL)
		return;
	printf ("%d ", raiz->chave);
	perPreOrdem(raiz->primeiroFilho);
	perPreOrdem(raiz->proximoIrmao);
}//Fim do procedimento perPreOrdem()

//Procedimento perOrdemSimetrica() - existe????
//Não existe já que ordem símetrica só faz sentido em árvore binária

// Função para exibir o menu
void menu() {
    printf("\n==== MENU ====\n");
    printf("1. Criar árvore\n");
    printf("2. Inserir nó\n");
    printf("3. Remover nó\n");
    printf("4. Buscar nó\n");
    printf("5. Exibir árvore (Pré-Ordem)\n");
    printf("6. Exibir árvore (Pós-Ordem)\n");
    printf("7. Sair\n");
    printf("Escolha uma opção: ");
}//Fim da função menu()

//Começo da main
int main() {
    setlocale(LC_ALL, "Portuguese");

    No* raiz = NULL;
    int opcao, chave, chavePai;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (raiz != NULL) {
                    printf("A árvore já existe!\n");
                } else {
                    printf("Digite a chave da raiz: ");
                    scanf("%d", &chave);
                    raiz = criarNo(chave);
                    printf("Raiz %d criada com sucesso!\n", chave);
                }
                break;

            case 2:
                if (raiz == NULL) {
                    printf("Crie a árvore primeiro!\n");
                } else {
                    printf("Digite a chave do pai: ");
                    scanf("%d", &chavePai);
                    No* pai = buscarNo(raiz, chavePai);
                    if (pai) {
                        printf("Digite a chave do novo nó: ");
                        scanf("%d", &chave);
                        inserirFilho(pai, chave);
                        printf("Nó %d inserido com sucesso!\n", chave);
                    } else {
                        printf("Pai %d não encontrado!\n", chavePai);
                    }
                }
                break;

            case 3:
                if (raiz == NULL) {
                    printf("A árvore está vazia!\n");
                } else {
                    printf("Digite a chave do nó a ser removido: ");
                    scanf("%d", &chave);
                    raiz = removerNo(raiz, chave);
                    printf("Nó %d removido com sucesso!\n", chave);
                }
                break;

            case 4:
                if (raiz == NULL) {
                    printf("A árvore está vazia!\n");
                } else {
                    printf("Digite a chave a ser buscada: ");
                    scanf("%d", &chave);
                    No* encontrado = buscarNo(raiz, chave);
                    if (encontrado) {
                        printf("Nó %d encontrado!\n", chave);
                    } else {
                        printf("Nó %d não encontrado!\n", chave);
                    }
                }
                break;

            case 5:
                if (raiz == NULL) {
                    printf("A árvore está vazia!\n");
                } else {
                    printf("Árvore (Pré-Ordem): ");
                    perPreOrdem(raiz);
                    printf("\n");
                }
                break;

            case 6:
                if (raiz == NULL) {
                    printf("A árvore está vazia!\n");
                } else {
                    printf("Árvore (Pós-Ordem): ");
                    perPosOrdem(raiz);
                    printf("\n");
                }
                break;

            case 7:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 7);

    return 0;
}//Fim da main()

