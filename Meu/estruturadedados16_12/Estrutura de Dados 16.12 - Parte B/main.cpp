#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "ListaDupEncadeadaPessoa.h"
#include "menus.h"

int main(int argc, char* argv[]) { //Início da main()
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
    Pessoa* lista = criarLista(); // Inicia a lista vazia automaticamente sem passar por menu
    int opcao, id, idade;
    char nome[80];
    float peso;
    
    printf ("\n\n\n\tEste programa controla o cadastro de pessoas através de uma lista encadeada!");
    clear();

	//Inicio do lado de controle do menu principal
    do {
        menuPrincipal();
        printf("\n\n\nEscolha uma opção: ");
        scanf("%d", &opcao);
        clear();

        switch (opcao) {
            case 0: // Sair do programa
                printf("\n\n\tVoce optou em sair do programa!");
                clear();
                break;

            case 1:
                printf("\n\n\tOpção 1 - Inserir Registro em Lista Encadeada");
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

            case 2:
                printf("\n\n\tOpção 2 - Inserir Registro no meio da Lista Encadeada");
                printf("\n\nInforme o ID: ");
                scanf("%d", &id);
                printf("\n\nInforme o nome: ");
                scanf(" %[^\n]s", nome);
                printf("\n\nInforme o peso (kg): ");
                scanf("%f", &peso);
                printf("\n\nInforme a idade: ");
                scanf("%d", &idade);
                lista = inserirMeio(lista, id, nome, idade, peso);
                printf("\n\n\nNovo registro inserido com sucesso na lista encadeada!\n\n\n");
                clear();
                break;

            case 3:
                printf("\n\n\tOpção 3 - Inserir Registro no final da Lista Encadeada");
                printf("\n\nInforme o ID: ");
                scanf("%d", &id);
                printf("\n\nInforme o nome: ");
                scanf(" %[^\n]s", nome);
                printf("\n\nInforme o peso (kg): ");
                scanf("%f", &peso);
                printf("\n\nInforme a idade: ");
                scanf("%d", &idade);
                lista = inserirFim(lista, id, nome, idade, peso);
                printf("\n\n\nNovo registro inserido com sucesso na lista encadeada!\n\n\n");
                clear();
                break;

            case 4:
                printf ("\n\n\nOpção 4 - Imprimir Lista Encadeada Direta");
                if (listaVazia(lista)) {
                    printf("\n\nImpossível imprimir! A lista está vazia!\n");
                } else {
                    printf("\n\n\tRegistros cadastrados na lista encadeada:\n\n");
                    imprimirListaDireta(lista);
                }
                clear();
                break;

            case 5:
                printf ("\n\n\nOpção 5 - Imprimir Lista Encadeada Direta");
                if (listaVazia(lista)) {
                    printf("\n\nImpossível imprimir! A lista está vazia!\n");
                } else {
                    printf("\n\n\tRegistros cadastrados na lista encadeada:\n\n");
                    imprimirListaInversa(lista);
                }
                clear();
                break;

            case 6:
                printf ("\n\n\nOpção 6 - Buscar um ID na Lista Encadeada");
                printf("\n\nInforme o ID para buscar na lista encadeada: ");
                scanf("%d", &id);
                Pessoa* encontrada = buscarPorId(lista, id);
                if (encontrada) {
                    printf("\n\n\tRegistro/Pessoa encontrado!");
                    printf("\n\nId: %d", encontrada->id);
                    printf("\n\nNome: %s", encontrada->nome);
                    printf("\n\nPeso: %.2f kg", encontrada->peso);
                    printf("\n\nIdade: %d anos completos", encontrada->idade);
                } else {
                    printf("\n\nPessoa com Id %d não encontrada na lista encadeada!", id);
                }
                clear();
                break;

            case 7:
                printf ("\n\n\nOpção 7 - Remover um ID na Lista Encadeada");
                printf("\n\n\nInforme o ID para remoção da lista encadeada: ");
                scanf("%d", &id);
                lista = removerPorId(lista, id);
                printf("\n\n\nCaso estivesse na lista, o registro foi removido com sucesso!");
                //E se quisermos verificar se o registro existe na lista ou não?
                clear();
                break;

            case 8:
                printf ("\n\n\nOpção 8 - Liberar Lista Encadeada");
                lista = liberarLista(lista);
                printf("\n\nLista liberada com sucesso!\n");
                clear();
                break;

            default:
                printf("\n\n\nOpção invalida! Informe uma opção valida!");
                clear();
        }
    } 
    while (opcao != 0); //Fim do lado de controle do menu principal

    // Garantir que a lista seja liberada ao final antes do encerramento do programa
    lista = liberarLista(lista);
    printf ("\n\n\nObrigado por utilizar nosso programa!\n\n\n");
    system ("Pause");
    return 0;
}//Fim da main()