#include <stdio.h>

// Variaveis

float conta;

//Codigo principal
main(){
	printf("Digite a sua conta de luz: ");
	scanf("%f", &conta);
	if (conta>50){
		printf("Voce esta gastando muito");
	} else {
		printf("Seu gasto foi normal");
	}
}
