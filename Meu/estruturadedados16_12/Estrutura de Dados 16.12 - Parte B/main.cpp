#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "ListaDupEncadeadaPessoa.h"
#include "menus.h"

int main(int argc, char* argv[]) { //In�cio da main()
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
    Pessoa* lista = criarLista(); // Inicia a lista vazia automaticamente sem passar por menu
    int opcao, id, idade;
    char nome[80];
    float peso;
    
    printf ("\n\n\n\tEste programa controla o cadastro de pessoas atrav�s de uma lista encadeada!");
    clear();

	//In�cio do la�o de controle do menu principal
    do {
        menuPrincipal();
        printf("\n\n\nEscolha uma op��o: ");
        scanf("%d", &opcao);
        clear();

        switch (opcao) {
            case 1: // Inserir novo registro (pessoa) na lista
            	printf ("\n\n\nOp��o desejada - Inserir Registro em Lista Encadeada");
                printf("\n\nInforme o ID: ");
                scanf("%d", &id);
                printf("\n\nInforme o nome: ");
                scanf(" %[^\n]s", nome);
                printf("\n\nInforme o peso (kg): ");
                scanf("%f", &peso);
                printf("\n\nInforme a idade: ");
                scanf("%d", &idade);
                lista = inserirInicio(lista, id, nome, idade, peso);
                printf("\n\n\nNovo registro inserido com sucesso na lista encadeada!\n\n\n");
                clear();
                break;

            case 2: // Imprimir lista encadeada
            	printf ("\n\n\nOp��o desejada - Listar Todos os Registros de Lista Encadeada");
                if (listaVazia(lista)) {
                    printf("\n\nImposs�vel imprimir! A lista est� vazia!\n");
                } else {
                    printf("\n\n\tRegistros cadastrados na lista encadeada:\n\n");
                    imprimirLista(lista);
                }
                clear();
                break;

            case 3: {// Buscar elemento na lista encadeada
            	printf ("\n\n\nOp��o desejada - Buscar Elemento em Lista Encadeada");
                printf("\n\nInforme o ID para buscar na lista encadeada: ");
                scanf("%d", &id);
                Pessoa* encontrada = buscaElemento(lista, id);
                if (encontrada) {
                    printf("\n\n\tRegistro/Pessoa encontrado!");
                    printf("\n\nId: %d", encontrada->id);
                    printf("\n\nNome: %s", encontrada->nome);
                    printf("\n\nPeso: %.2f kg", encontrada->peso);
                    printf("\n\nIdade: %d anos completos", encontrada->idade);
                } else {
                    printf("\n\nPessoa com Id %d n�o encontrada na lista encadeada!", id);
                }
                clear();
                break;
			}
			
            case 4: // Remover elemento da lista encadeada
               	printf ("\n\n\nOp��o desejada - Remover Registro de Lista Encadeada");
                printf("\n\n\nInforme o ID para remo��o da lista encadeada: ");
                scanf("%d", &id);
                lista = removerElemento(lista, id);
                printf("\n\n\nCaso estivesse na lista, o registro foi removido com sucesso!");
                //E se quisermos verificar se o registro existe na lista ou n�o?
                clear();
                break;

            case 5: // Liberar lista encadeada
            	printf ("\n\n\nOpção desejada - Liberar Lista Encadeada");
                lista = liberarLista(lista);
                printf("\n\nLista liberada com sucesso!\n");
                clear();
                break;

            case 6: 

            case 0: // Sair do programa
                printf("\n\n\tVoc� optou em sair do programa!");
                clear();
                break;

            default:
                printf("\n\n\nOp��o inv�lida! Informe uma op��o v�lida!");
                clear();
        }
    } while (opcao != 0); //Fim do la�o de controle do menu principal

    // Garantir que a lista seja liberada ao final antes do encerramento do programa
    lista = liberarLista(lista);
    printf ("\n\n\nObrigado por utilizar nosso programa!\n\n\n");
    system ("Pause");
    return 0;
}//Fim da main()
