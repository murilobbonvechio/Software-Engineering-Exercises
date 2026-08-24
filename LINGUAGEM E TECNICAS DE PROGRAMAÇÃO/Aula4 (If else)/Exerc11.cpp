#include <stdio.h>

//Variaveis

float A, B, C;

//Codigo Principal
main(){
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	printf("\nDigite o terceiro valor: ");
	scanf("%f", &C);
	if (A>B && B>C){ // C B A
		printf("%.2f, %.2f, %.2f", C, B, A);
	} else if (B>A && A>C){ // C A B
		printf("%.2f, %.2f, %.2f", C, A, B);
	} else if (C>A && A>B){ // B A C
		printf("%.2f, %.2f, %.2f", B, A, C);
	} else if (C>B && B>A){ // A B C
		printf("%.2f, %.2f, %.2f", A, B, C);
	} else if (A>C && C>B){ // B C A
		printf("%.2f, %.2f, %.2f", B, C, A);
	} else if (B>C && C>A){ // A C B
		printf("%.2f, %.2f, %.2f", A, C, B);
	} else {
		printf("\nApresente apenas numeros que nao se repetem!");
	}
}
