
#include <stdio.h>
#include <string.h>

int main(){
    char p[20];
    char c[20];
    
    printf("RPG TESTE\n");
    printf("Digite um nome para o seu(a) personagem:");
    fflush(stdin);
    gets(p);
    
    printf("\nEscolha uma classe, digitando entre Guerreiro ou Monge:");
    fflush(stdin);
    gets(c);
    if(strcmp(c, "Guerreiro") == 0){
        printf("\n\nGuerreiro");
    }
    else {
        printf("\n\nMonge");
    }
}
