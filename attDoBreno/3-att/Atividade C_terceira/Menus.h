#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento clear()
void clear() {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do procedimento clear()

//Procedimento menu()
int menu() {
	int op;	
	printf ("\n\n\tSistema de Biblioteca (Pilha)");
	printf ("\n\n\tMenu");
	printf ("\n\n\n1 - Criar Pilha");
	printf ("\n2 - Empilhar");
	printf ("\n3 - Desempilhar");
	printf ("\n4 - Exibir Pilha");
	printf ("\n5 - Verificar - Pilha Cheia");
	printf ("\n6 - Verificar - Pilha Vazia");
	printf ("\n7 - Exibir Topo");
	printf ("\n0 - Sair");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op);
	return op;
}//Fim do procedimento menu()

