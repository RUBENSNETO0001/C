#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include <stdio.h>
#include <stdlib.h>

#define TAM_NOME 50 

// Estrutura do n� da �rvore, com o campo 'nomeElemento'
typedef struct no {
    int chave;
    char nomeElemento[TAM_NOME];
    struct no *esquerda;
    struct no *direita;
} no;

// Declara��o das fun��es
void inserirNo(no **raiz, int elemento, char nomeElemento[]);
no *doisFilhos(no *root);
void removerNo(no **raiz, int elemento);
void perOrdemSimetrica(no *raiz);
void perPosOrdem(no *raiz);
void perPreOrdem(no *raiz);
no* buscarNo(no* raiz, int elemento);

#endif

