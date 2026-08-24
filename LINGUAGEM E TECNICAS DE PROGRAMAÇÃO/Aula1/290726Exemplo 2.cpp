#include <stdio.h>

int idade;
char nome[100];
float valor;

main(){
	//== 1 forma de atruibuir valor para variavel
	idade = 21;
	printf("Sua idade e: %i", idade);
	//== 2 forma de atribuir valor para variavel
	//== Lendo um valor
	printf("\nDigite sua idade: \n");
	scanf("%i", &idade);
	printf("Sua idade e: %i", idade);
	
}
