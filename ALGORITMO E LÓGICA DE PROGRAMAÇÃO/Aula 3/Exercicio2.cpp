#include <stdio.h>

//Variaveis
float alg, alm, trans, laz, mtacad, gmens, ganual, gmediodia, percalg;

//Codigo principal
main(){
	printf("\n--------------------------------\n Valor Gasto Mensalmente \n--------------------------------");
	printf("\nDigite o valor do aluguel: \n");
	scanf("%f", &alg); 
	printf("\nDigite o valor gasto em alimentacao: \n");
	scanf("%f", &alm);
	printf("\nDigite o valor do transporte: \n");
	scanf("%f", &trans);
	printf("\nDigite o valor gasto em lazer: \n");
	scanf("%f", &laz);
	printf("\nDigite o valor dos materiais academicos: \n");
	scanf("%f", &mtacad);
	gmens = (alg+alm+trans+laz+mtacad);
	ganual = 12*gmens;
	gmediodia = gmens/30;
	percalg = alg/gmens*100;
	printf("\nO gasto mensal e de: %.2f %", gmens);
	printf("\nO gasto anual e de: %.2f %", ganual);
	printf("\nO gasto médio diário e de: %.2f %", gmediodia);
	printf("\nPercentual do orçamento destinado ao aluguel e de: %.2f %", percalg);
}
