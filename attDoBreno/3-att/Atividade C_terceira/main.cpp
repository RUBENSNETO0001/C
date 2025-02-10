#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha.h"
#include "Menus.h"

// In�cio da main()
int main() {
    setlocale(LC_ALL, "Portuguese");
    Pilha pilhaLivros;
    int op;

    inicializarPilha(&pilhaLivros); // Inicializa a pilha no in�cio

    do {
        op = menu();
        switch (op) {
            case 1: // Criar Pilha
                inicializarPilha(&pilhaLivros);
                printf("\n\nPilha inicializada com sucesso!");
                break;

            case 2: { // Empilhar
                clear();
                if (pilhaCheia(&pilhaLivros)) {
                    printf("\n\nA pilha est� cheia! N�o � poss�vel empilhar mais livros.");
                    break;
                }
                Livro novoLivro = carregarLivro();
                if (!compararElementos(&pilhaLivros, novoLivro.codLivro)) {
                    empilhar(&pilhaLivros, novoLivro);
                    printf("\n\nLivro empilhado com sucesso!");
                } else {
                    printf("\n\nLivro com c�digo j� existente na pilha!");
                }
                break;
            }

            case 3: { // Desempilhar
                if (pilhaVazia(&pilhaLivros)) {
                    printf("\n\nA pilha est� vazia! N�o h� livros para desempilhar.");
                } else {
                    Livro removido = desempilhar(&pilhaLivros);
                    printf("\n\nLivro removido: %s", removido.nome);
                }
                break;
            }

            case 4: // Exibir Pilha
                exibirPilha(&pilhaLivros);
                break;

            case 5: // Verificar - Pilha Cheia
                printf("\n\nA pilha est� %s.", pilhaCheia(&pilhaLivros) ? "cheia" : "n�o cheia");
                break;

            case 6: // Verificar - Pilha Vazia
                printf("\n\nA pilha est� %s.", pilhaVazia(&pilhaLivros) ? "vazia" : "n�o vazia");
                break;

            case 7: { // Exibir Topo
                if (pilhaVazia(&pilhaLivros)) {
                    printf("\n\nA pilha est� vazia! N�o h� topo.");
                } else {
                    Livro topo = topoPilha(&pilhaLivros);
                    printf("\n\nLivro no topo: %s", topo.nome);
                }
                break;
            }

            case 0: // Sair
                printf("\n\nObrigado por utilizar nosso programa!\n\n");
                break;

            default:
                printf("\n\nInforme uma op��o v�lida!");
        }
        clear();
    } while (op != 0);

    system("pause");
    return 0;
}
 
