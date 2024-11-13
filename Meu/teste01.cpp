#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.
//inicio do clear()
void clear(){
	printf("\n\n\n");
	system("pause");
	system("cls");
}
//fim do clear()
//inicio da main()
int main(void){
	system("cls");
	setlocale(LC_ALL,"portuguese");
	
	int n = 3, m = 3;
	int A[n][m]; //aqui vai ser uma matriz quadrada que eu mesmo coloquei.
	
	//	variavel do for.
	int i, j;

	printf("\n\nEsse progrma vai ler os dados de uma matriz quadrada de inteiros.\nAo final da leitura o programa vai imprimir o número da linha que contém o menor dentre todos os números lidos");
	printf("\n\n\nVamos começa o programa?");
	clear();
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("\n\nMe um numero para a matriz A na posição [%d][%d]: ", i, j );
			scanf("%d", &A[i][j]);
		}
	}

	printf("A matriz A = [");
	for(i = 0; i < n; i++){
	printf("\n");
		for(j = 0; j < m; j++){
			printf(" %d ", A[i][j]);
		}
	}
	printf("]");
	
	
	if(i > 0 && j > 0){
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				
			}	
		}
	}
	
	clear();
	printf("\n\n\nMenor numero da matriz A = [%d]");
	
	return 0;
}
//fim da main()
