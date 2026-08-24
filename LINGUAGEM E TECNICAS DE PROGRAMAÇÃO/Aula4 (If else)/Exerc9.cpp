#include <stdio.h>

//Variaveis

float P, E, M;

//Código Principal
main(){
	printf("\n------------------------------------\n R E C E I T A \n T I G R I N H O \n------------------------------------\n");
	printf("\nApresente quantos quilos de peixe esta transportando: \n");
	scanf("%f", &P);
	if(P>50){
		E = P - 50;
		M = E*4;
		printf("\nO peso de transporte se excedeu, sendo necessario o pagamento da multa de R$ %.2f \nExcedencia de: %.1f kg", M, E);	
	} else {
		E = 0;
		M = 0;
		printf("\nO peso de transporte esta de acordo com o regulamento.\nExcedencia de: %.2f kg \nMulta de: R$ %.2f ", E, M);
	}
}
