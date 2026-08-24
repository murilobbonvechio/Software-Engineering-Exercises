#include <stdio.h>

// Variaveis

float a, b, d;

//Codigo principal
main(){
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	if(a>b){
		d = a - b;
		printf("O primeiro numero e maior com a diferenca de %.2f", d);
	} else {
		d = b - a;
		printf("O segundo numero e maior com a diferenca de %.2f", d);
	}
}
