#include <stdio.h>

// Variaveis

int mc;
float vl;

//Codigo principal
main(){
	printf("Digite o valor de macas que deseja comprar: ");
	scanf("%i", &mc);
	if(mc>=12){
		vl = mc;
		printf("O total a pagar e de %.2f", vl);
	} else {
		vl = mc*1.3;
		printf("O total a pagar e de %.2f", vl);
	}
}
