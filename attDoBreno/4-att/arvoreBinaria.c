#include "arvoreBinaria.h"
#include <string.h>

// Procedimento inserirNo(): insere um novo nó na árvore (recursivamente)
void inserirNo(no **raiz, int elemento, char nomeElemento[]) {
    if (*raiz == NULL) { // Caso 1 – inserindo nó na posição desejada (incluso o nó raiz)
        no *aux = (no *)malloc(sizeof(no));
        if(aux == NULL) {
            printf("Erro de alocacao de memoria!\n");
            return;
        }
        aux->chave = elemento;
        // Copia o nome para o campo nomeElemento (garantindo a terminação nula)
        strncpy(aux->nomeElemento, nomeElemento, TAM_NOME - 1);
        aux->nomeElemento[TAM_NOME - 1] = '\0';
        aux->esquerda = aux->direita = NULL;
        *raiz = aux;
        system("cls");
        printf("\n\n\nElemento inserido com sucesso na arvore binaria!\n");
        return;
    }
    // Resto da função...
    if (elemento < ((*raiz)->chave)) { // Inserir à esquerda
        inserirNo(&(*raiz)->esquerda, elemento, nomeElemento);
        system("cls");
        printf("\n\n\nElemento inserido com sucesso na arvore binaria!\n");
        return;
    }
    
    if (elemento > ((*raiz)->chave)) { // Inserir à direita
        inserirNo(&(*raiz)->direita, elemento, nomeElemento);
        system("cls");
        printf("\n\n\nElemento inserido com sucesso na arvore binaria!\n");
        return;
    }
    
    // Se chegar aqui, é porque a chave já existe
    printf("\n\n\nO codigo de elemento %d e uma repeticao! Elemento nao inserido na arvore binaria\n", elemento);
}


// Função doisFilhos(): utilizada na remoção para encontrar o sucessor (menor nó da subárvore direita)
no *doisFilhos(no *root) {
    if (root == NULL)
        return NULL;
    else if (root->esquerda == NULL)
        return root;
    else
        return doisFilhos(root->esquerda);
}

// Procedimento removerNo(): remove um nó da árvore
void removerNo(no **raiz, int elemento) {
    if (*raiz == NULL) {
        printf("\nElemento nao encontrado na arvore.\n");
        return;
    }
    
    if (elemento < (*raiz)->chave) {
        removerNo(&(*raiz)->esquerda, elemento);
    }
    else if (elemento > (*raiz)->chave) {
        removerNo(&(*raiz)->direita, elemento);
    }
    else if ((*raiz)->esquerda != NULL && (*raiz)->direita != NULL) { // Nó com dois filhos
        no *aux = doisFilhos((*raiz)->direita);
        (*raiz)->chave = aux->chave;
        strncpy((*raiz)->nomeElemento, aux->nomeElemento, TAM_NOME);
        removerNo(&(*raiz)->direita, (*raiz)->chave);
    }
    else { // Nó com 0 ou 1 filho
        no *aux = (*raiz);
        if ((*raiz)->esquerda == NULL)
            (*raiz) = (*raiz)->direita;
        else
            (*raiz) = (*raiz)->esquerda;
        free(aux);
        system("cls");
        printf("\n\n\nElemento de chave %d removido com sucesso da arvore binaria!\n\n", elemento);
        system("Pause");
    }
}

// Procedimento perOrdemSimetrica(): Exibe a árvore em ordem simétrica (E-R-D)
void perOrdemSimetrica(no *raiz) {
    if (raiz == NULL)
        return;
    perOrdemSimetrica(raiz->esquerda);
    printf("\nChave: %d, Nome: %s", raiz->chave, raiz->nomeElemento);
    perOrdemSimetrica(raiz->direita);
}

// Procedimento perPosOrdem(): Exibe a árvore em pós-ordem (E-D-R)
void perPosOrdem(no *raiz) {
    if (raiz == NULL)
        return;
    perPosOrdem(raiz->esquerda);
    perPosOrdem(raiz->direita);
    printf("\nChave: %d, Nome: %s", raiz->chave, raiz->nomeElemento);
}

// Procedimento perPreOrdem(): Exibe a árvore em pré-ordem (R-E-D)
void perPreOrdem(no *raiz) {
    if (raiz == NULL)
        return;
    printf("\nChave: %d, Nome: %s", raiz->chave, raiz->nomeElemento);
    perPreOrdem(raiz->esquerda);
    perPreOrdem(raiz->direita);
}

// Função buscarNo(): busca um nó específico na árvore, imprimindo o caminho percorrido
no* buscarNo(no* raiz, int elemento) {
    if (raiz == NULL) {
         printf("\nElemento %d nao encontrado na arvore.\n", elemento);
         return NULL;
    }
    // Imprime o nó atual (chave e nome)
    printf("\nVisitando no: Chave: %d, Nome: %s", raiz->chave, raiz->nomeElemento);
    if (elemento == raiz->chave) {
         printf("\nElemento encontrado!\n");
         return raiz;
    }
    if (elemento < raiz->chave) {
         printf("\nIndo para a esquerda...\n");
         return buscarNo(raiz->esquerda, elemento);
    } else {
         printf("\nIndo para a direita...\n");
         return buscarNo(raiz->direita, elemento);
    }
}

