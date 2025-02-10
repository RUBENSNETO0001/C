#ifndef MENUS_H
#define MENUS_H

#include <stdio.h>
#include <stdlib.h>

// Procedimento clear()
void clear(void) {
    printf("\n\n\n");
    system("Pause");
    system("cls");
}//Fim do procedimento clear()

// Função menuPrincipal() – incluímos a opção 4 para buscar elemento
int menuPrincipal(void) {
    int op;
    system("cls");
    printf("\n\n\tMenu");
    printf("\n\n1 - Inserir Elemento na Arvore Binaria");
    printf("\n\n2 - Excluir Elemento da Arvore Binaria");
    printf("\n\n3 - Percorrer/Exibir Arvore Binaria");
    printf("\n\n4 - Buscar Elemento na Arvore Binaria");
    printf("\n\n0 - Sair");
    printf("\n\n\nInforme a opcao desejada: ");
    scanf("%d", &op);
    if(op == 1 || op == 2 || op == 3 || op == 4 || op == 0)
         return op;
    else {
         printf("\n\n\nInforme uma opcao valida!");
         clear();
         return menuPrincipal();
    }
}

// Função menuTravessia() – para os diferentes tipos de percurso
int menuTravessia(void) {
    int op;
    system("cls");
    printf("\n\n\tMenu - Percorrer/Exibir Arvore Binaria");
    printf("\n\n1 - Percorrer/Exibir Arvore Binaria por Ordem Simetrica (E-R-D)");
    printf("\n\n2 - Percorrer/Exibir Arvore Binaria em Pos-Ordem (E-D-R)");
    printf("\n\n3 - Percorrer/Exibir Arvore Binaria em Pre-Ordem (R-E-D)");
    printf("\n\n0 - Voltar ao Menu Principal");
    printf("\n\n\nInforme a opcao desejada: ");
    scanf("%d", &op);
    if(op == 1 || op == 2 || op == 3 || op == 0)
         return op;
    else {
         printf("\n\n\nInforme uma opcao valida!");
         clear();
         return menuTravessia();
    }
}

#endif

