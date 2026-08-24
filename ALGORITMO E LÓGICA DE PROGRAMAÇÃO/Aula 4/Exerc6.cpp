#include <stdio.h>

//Variaveis

float cKwh, pKwh, txB, ilp, otx, cEn, vTot, cmKwh, cAnual;

//Codigo Principal
main(){
	printf("\nApresente o consumo de KWH: ");
	scanf("%f", &cKwh);
	printf("\nApresente o preco do KWH: ");
	scanf("%f", &pKwh);
	printf("\nApresente a taxa da Bandeira: ");
	scanf("%f", &txB);
	printf("\nApresente a taxa da Iluminacao Publica: ");
	scanf("%f", &ilp);
	printf("\nApresente o preco das outras taxas utilizadas: ");
	scanf("%f", &otx);
	cEn = (cKwh*pKwh);
	vTot = (cKwh*pKwh)+ilp+otx+txB;
	cmKwh = vTot/30;
	cAnual = vTot*12;
	printf("\nO custo da energia e de: %.2f \nO valor total e de: %.2f \nO custo medio do Kwh e de: %.2f \nO custo anual e de: %.2f", cEn, vTot, cmKwh, cAnual);
}
