#include <stdio.h>

//Variaveis

int idade;

//Codigo Principal
main(){
	printf("\n------------------------------\n Classificando sua \n    Categoria\n------------------------------\n");
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	if (idade>18){
		printf("\nSua classificacao e: Adulto");
	} else if (idade>=14){
		printf("\nSua classificacao e: Juvenil");
	} else if (idade>=12){
		printf("\nSua classificacao e: Infantil");
	} else if (idade>=8){
		printf("\nSua classificacao e: Mirim");
	} else if (idade>=5){
		printf("\nSua classificacao e: Pre-Mirim");
	} else {
		printf("\nSua classificacao e: Fraldinha");
	}
}
