#include <stdio.h>

//Variaveis

float vlH, hN, hE, pE, tP;
float vH, vE, fB, vTP, fL;

//Codigo Principal
main(){
	printf("\n----------------------------\n C O N T R A T A C A O\n         D E\n F R E E L A N C E R\n----------------------------\n");
	//THUMBNAIL
	printf("\nApresente o valor por hora trabalhada: ");
	scanf("%f", &vlH);
	printf("\nQuantas horas trabalhou dentro do horario de servico: ");
	scanf("%f", &hN);
	printf("\nQuantas horas trabalhou fora de seu expediente: ");
	scanf("%f", &hE);
	printf("\nInsira o percentual de hora extra em %: ");
	scanf("%f", &pE);
	printf("\nApresente a taxa da plataforma utilizada: ");
	scanf("%f", &tP);
	// 1. Valor de horas normais 
		vH = vlH*hN;
	// 2. Valor de horas extras  
		vE = (vlH*hE)*pE/100;
	// 3. Faturamento bruto
		fB = vH + vE;
	// 4. Valor da taxa da plataforma
		vTP = fB*tP/100;
	// 5. Faturamento liquido
		fL = fB - vTP;
	//Entrega de resultados
	printf("\n----------------------------\n C U S T O S \n----------------------------\n");
	printf("\nO valor de horas normais e de: R$ %.2f \n", vH);
	printf("\nO valor de horas extras e de: R$ %.2f \n", vE);
	printf("\nFaturamento bruto: R$ %.2f \n", fB);
	printf("\nValor da taxa da plataforma: R$ %.2f \n", vTP);
	printf("\nValor liquido recebido: R$ %.2f \n", fL);



}
