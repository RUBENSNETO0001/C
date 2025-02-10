#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>	
#include "menus.h"
#include "arvoreBinaria.h"
#include "arvoreBinaria.c"

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int controle = 1, quantChaves = 0, chave, i, op1;
    no *raiz = NULL;
    char nome[TAM_NOME];
    
    printf("\n\nSistema de Gerenciamento de Arvores Binarias");
    clear();
    
    while (controle) {
        int opcao = menuPrincipal();
        clear();
        switch(opcao) {
            case 1: // Inserir elemento
                printf("\n\nOpcao: Inserir No na Arvore Binaria");
                printf("\n\nObservacao: a primeira chave digitada sera o no raiz!");
                printf("\n\nInforme a quantidade de chaves que serao inseridas na arvore: ");
                scanf("%d", &quantChaves);
                for(i = 1; i <= quantChaves; i++) {
                    clear();
                    printf("\n\nInforme o valor da %dª chave: ", i);
                    scanf("%d", &chave);
                    printf("\nInforme o nome do elemento: ");
                    fflush(stdin);
                    fgets(nome, TAM_NOME, stdin);
                    size_t ln = strlen(nome);
                    if(ln > 0 && nome[ln-1] == '\n')
                        nome[ln-1] = '\0';
                    
                    inserirNo(&raiz, chave, nome);
                    printf("\n\nNova chave inserida com sucesso!");
                    system("Pause");
                }
                break;
            
            case 2: // Remover elemento
                printf("\n\nOpcao: Excluir Elemento da Arvore Binaria");
                printf("\n\nInforme a chave do elemento que sera excluido: ");
                scanf("%d", &chave);
                removerNo(&raiz, chave);
                printf("\n\nElemento removido com sucesso!");
                system("Pause");
                break;
            
            case 3: { // Percorrer/Exibir a árvore
                op1 = menuTravessia();
                clear();
                switch(op1) {
                    case 1: // Ordem Simetrica (E-R-D)
                        printf("\n\nResultado da listagem em Ordem Simetrica:");
                        perOrdemSimetrica(raiz);
                        system("Pause");
                        break;
                    
                    case 2: // Pos-Ordem (E-D-R)
                        printf("\n\nResultado da listagem em Pos-Ordem:");
                        perPosOrdem(raiz);
                        system("Pause");
                        break;
                    
                    case 3: // Pre-Ordem (R-E-D)
                        printf("\n\nResultado da listagem em Pre-Ordem:");
                        perPreOrdem(raiz);
                        system("Pause");
                        break;
                    
                    case 0:
                        break;
                    
                    default:
                        printf("\nInforme uma opcao valida!");
                        system("Pause");
                }
                break;
            }
            
            case 4: // Buscar elemento na árvore
                printf("\n\nOpcao: Buscar Elemento na Arvore Binaria");
                printf("\n\nInforme a chave do elemento que deseja buscar: ");
                scanf("%d", &chave);
                clear();
                buscarNo(raiz, chave);
                printf("\n\nPesquisa concluida!");
                system("Pause");
                break;
            
            case 0:
                printf("\n\nVoce optou por encerrar o programa!");
                controle = 0;
                break;
            
            default:
                printf("\nInforme uma opcao valida!");
                system("Pause");
        }
    }
    
    printf("\n\nObrigado por utilizar nosso programa!\n\n");
    system("Pause");
    return 0;
}
		
