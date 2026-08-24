#include <stdio.h>

// Variaveis

float real, dolar, euro, cdolar, ceuro;

//Código Principal
main(){
	printf("\nDigite o valor que deseja em real que deseja converter: R$");
	scanf ("%f", &real);
	printf("\nDigite o valor atual do dolar: US$");
	scanf ("%f", &dolar);
	printf("\nDigite o valor atual do euro:  €");
	scanf ("%f", &euro);
	//Converções
	cdolar = real/dolar;
	ceuro = real/euro;
	printf("\nValor em reais e de: R$%.2f\n", real);
	printf("\nValor convertido ao dolar e de: US$%.2f\n", cdolar);
	printf("\nA taxa padrao de operacao e de: 15 %\n");
	printf("\nValor liquido em dolar e de: US$%.2f\n", cdolar-(cdolar*0.015));
	printf("\nValor convertido em euro e de: €$%.2f\n", ceuro);
	printf("\nA taxa padrao de operacao e de: 15 %\n");
	printf("\nValor liquido em euro e de: €$%.2f\n", ceuro-(ceuro*0.015));

}
