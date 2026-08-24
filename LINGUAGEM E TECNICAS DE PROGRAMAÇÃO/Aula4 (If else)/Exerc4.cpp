#include <stdio.h>

// Variaveis
char tipo;
float capl, total;


//Codigo principal
main(){
	printf("\nDigite o tipo de combustivel de seu carro: G para gasolina e A para alcool\n");
	scanf("%c", &tipo);
	printf("\nQual a capacidade total de litros? ");
	scanf("%f", &capl);
	
	if (tipo=='G' || tipo=='g'){
		total = capl * 6.50;
		printf("Valor total para encher o tanque com Gasolina: R$ %.2f\n", total);
	} else if (tipo == 'A' || tipo == 'a'){
		total = capl * 4.5;
		printf("Valor total para encher o tanque com Alcool: R$ %.2f\n", total);
	} else {
		printf("Tipo de combustivel invalido! Use apenas G ou A\n");
	}
	return 0;
}
