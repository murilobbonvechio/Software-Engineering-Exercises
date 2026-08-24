#include <stdio.h>

// Variaveis

int valor;
//Codigo principal
main(){
	printf("\nDigite um valor inteiro: ");
	scanf("%i", &valor);
	if(valor<0){
		printf("\nO numero e: %i", valor*-1);
	} else {
		printf("\nO numero e: %i", valor);
	}
}
