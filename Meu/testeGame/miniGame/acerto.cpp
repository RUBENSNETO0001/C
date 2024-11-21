#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int aleatorio() {
    
    // Inicializa a semente para gerar números aleatórios diferentes a cada execução
    srand(time(NULL));
    
    //aqui eu eu delimitei que o random vai de 0 a 100 ele descarta 1
 	int random01 = rand() % 101;
    
 }

int main(void) {
	 system("clear");
	setlocale(LC_ALL,"portuguese");

	char nome[80], comeca[3];
	int num, i;

	printf("miniGame de acerto.");

	printf("\n\n\nA brincadeira e simples eu vou lança um numero de 0 a 100, se não for igual ao meu numero você vc perde se for igual você ganha(3 tentativas).\n\n\nVamos começa:\n\n");
	scanf("%s", comeca);
	system("clear");
	
	if(comeca != "n"){
	    for(i = 0; i < 3; i++) {
	       // dar sempre um novo numero
	        int numero = aleatorio();
    		// pedindo o numero
    		printf("\n\n\nMe de um numero: ");
    		scanf("%d", &num);
    		
            if(num == numero ) {
         		printf("Você ganhou.");
         		printf("\nNumero sorteado [%d]", numero);
         	}
         	else {
                printf("Você perdeu.");
                printf("\nNumero sorteado [%d]", numero);
         	}
	    }
	}

	return 0;
}
