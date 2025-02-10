#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha.h"
#include "Menus.h"

// Início da main()
int main() {
    setlocale(LC_ALL, "Portuguese");
    Pilha pilhaLivros;
    int op;

    inicializarPilha(&pilhaLivros); // Inicializa a pilha no início

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
                    printf("\n\nA pilha está cheia! Não é possível empilhar mais livros.");
                    break;
                }
                Livro novoLivro = carregarLivro();
                if (!compararElementos(&pilhaLivros, novoLivro.codLivro)) {
                    empilhar(&pilhaLivros, novoLivro);
                    printf("\n\nLivro empilhado com sucesso!");
                } else {
                    printf("\n\nLivro com código já existente na pilha!");
                }
                break;
            }

            case 3: { // Desempilhar
                if (pilhaVazia(&pilhaLivros)) {
                    printf("\n\nA pilha está vazia! Não há livros para desempilhar.");
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
                printf("\n\nA pilha está %s.", pilhaCheia(&pilhaLivros) ? "cheia" : "não cheia");
                break;

            case 6: // Verificar - Pilha Vazia
                printf("\n\nA pilha está %s.", pilhaVazia(&pilhaLivros) ? "vazia" : "não vazia");
                break;

            case 7: { // Exibir Topo
                if (pilhaVazia(&pilhaLivros)) {
                    printf("\n\nA pilha está vazia! Não há topo.");
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
                printf("\n\nInforme uma opção válida!");
        }
        clear();
    } while (op != 0);

    system("pause");
    return 0;
}
 
