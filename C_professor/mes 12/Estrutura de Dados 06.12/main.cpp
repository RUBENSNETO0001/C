#include "ListaEncadeadaPessoa.h"

//Início main()
int main (int argc, char* argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int control = 1, op;
	//Campos dos registros???
	int id, idade;
	char nome[80];
	float peso;
	//???
	//Lista - ???
	Pessoa* pessoa;
	
	while (control) {
		op = menu();
		system ("cls");
		switch (op) {
			case 1:
				printf ("\n\n\n\tOpção desejada: Criar Lista Encadeada");
				pessoa = criarLista();
				printf ("\n\nLista encadeada criada com sucesso!\n\n");
				system ("Pause");
				break;
			case 2:
				printf ("\n\n\n\tOpção desejada: Inserir Registro em Lista Encadeada");
				printf ("\n\n\nInforme o id da pessoa: ");
				scanf ("%d", &id);
				printf ("\n\nInforme o nome da pessoa: ");
				fflush(stdin);
				gets(nome);
				printf ("\n\nInforme o peso da pessoa(kg): ");
				scanf ("%f", &peso);
				printf ("\n\nInforme a idade da pessoa (em anos completos): ");
				scanf ("%d", &idade);
				pessoa = inserirLista(pessoa, id, nome, peso, idade);
				printf ("\n\n\nNovo registro inserido com sucesso!\n\n\n");
				system ("Pause");
				break;
			case 3: //Alterar Registro na Lista
				break;
			case 4:
				break;
			case 5:
				printf ("\n\n\n\tOpção desejada: Listar Todos os Registros de Lista Encadeada");
				imprimirLista(pessoa);
				printf ("\n\n\nImpressão da lista realizada com sucesso!\n\n\n");
				system ("Pause");
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				printf ("\n\n\n\tOpção desejada: Liberar Lista Encadeada");
				if (liberarLista(pessoa) == NULL) 
					printf ("\n\nLista encadeada liberada com sucesso!\n\n");
				else
					printf ("\n\nFalhar no processo de liberação de lista encadeada!\n\n");
				system ("Pause");
				break;
			
			case 0:
				printf ("\n\n\n\tVocê optou em sair!");
				control = 0;
				break;
		}
	}
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim main()
