#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"
#include "menus.h"

// Procedimento clear
void clear(void) {
    printf("\n\n\n");
    system("Pause");
    system("cls");
}

// In�cio da main()
int main(int argc, char* argv[]) {
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    Fila fila;
    int opcao;
    inicializarFila(&fila);
    printf("\nEste programa manipula uma fila de cadastros de alunos!\n");
    clear();

    // La�o principal do programa
    do {
        system("cls");
        opcao = menu();

        switch (opcao) {
            case 1: {
                system("cls");
                printf("\nEnfileirar Cadastro de Aluno");
                Aluno aluno;
                printf("\nInforme o nome do aluno: ");
                fgets(aluno.nome, MAX, stdin);
                aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

                printf("\nInforme a matr�cula do aluno: ");
                scanf("%d", &aluno.matricula);

                printf("\nInforme o c�digo do curso do aluno: ");
                scanf("%d", &aluno.codCurso);
                limparBuffer();

                printf("\nInforme o tipo do curso do aluno: ");
                fgets(aluno.tipoCurso, MAX, stdin);
                aluno.tipoCurso[strcspn(aluno.tipoCurso, "\n")] = '\0';

                printf("\nInforme a idade do aluno: ");
                scanf("%d", &aluno.idade);

                printf("\nInforme o coeficiente de aproveitamento do aluno: ");
                scanf("%f", &aluno.coefMediaGeral);

                enfileirar(&fila, aluno);
                clear();
                break;
            }

            case 2: {
                system("cls");
                printf("\nDesenfileirar Cadastro de Aluno");
                if (!filaVazia(&fila)) {
                    Aluno removido = desenfileirar(&fila);
                    printf("\nNome do aluno desenfileirado: %s.\n", removido.nome);
                } else {
                    printf("\nA fila de cadastros de alunos est� vazia!\n");
                }
                clear();
                break;
            }

            case 3: {
                system("cls");
                printf("\nExibir Fila de Cadastros de Alunos");
                exibirFila(&fila);
                clear();
                break;
            }

            case 4: {
                system("cls");
                int posicao;
                printf("\nBuscar na Fila de Cadastros de Alunos\n");
                printf("\nQual � a posi��o da fila que voc� deseja ver? ");
                scanf("%d", &posicao);

                buscarnaFila(&fila, posicao);
                clear();
                break;
            }

            case 0:
                system("cls");
                printf("\nVoc� optou por sair!\n");
                break;

            default:
                printf("\nInforme uma op��o v�lida!\n");
        }

    } while (opcao != 0);

    printf("\nObrigado por utilizar nosso programa!\n");
    system("Pause");
    return 0;
}
