#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear(){
	printf("\n\n\n");
	system("Pause");
	system("cls");
}

int main(void){
	system("cls");
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	int i, j, linha, coluna;
	int matriz[linha][coluna];
	
	//variaveis
	printf("\n\n\nEsse programa vai coletar numeros e por em uma matriz e depois o usuario vai pode verificar se algum numero esta na matriz");
	printf("\n\t\tVamos lá");
	
	//pergunta inicial
	printf("\n\n\nMe informe a qunatidade de linhas da matriz: ");
	scanf("%d", &linha);
	printf("\n\n\nMe informe a qunatidade de linhas da matriz: ");
	scanf("%d", &coluna);
	
	//aqui vou colocar os numeros
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("\n\n\nMe informe um numero para a matriz [%d] [%d]: ", i , j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	clear();
	//aqui vou mostrar
	printf("matriz = [");
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("%d", matriz[i][j]);
		}
	}
	printf("]");
	printf("Obrigado por usar meu programa");
	return 0;
}
