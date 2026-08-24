#include <stdio.h>

//Variaveis
float sBruto, Inss, Ir, sLiquid, dInss, dIr;

//Codigo principal
main(){
	printf("\nDigite seu salario bruto: ");
	scanf("%f", &sBruto);
	printf("\nQual o percentual do INSS:");
	scanf("%f", &Inss);
	printf("\nQual o percentual do IR:");
	scanf("%f", &Ir);
	dInss = sBruto*Inss;
	dIr = sBruto*Ir;
	sLiquid = sBruto-dInss-dIr;
	printf("\nValor descontado do INSS e: %.1f", dInss);
	printf("\nValor descontado do IR e: %.1f", dIr);
	printf("\nSeu salario liquido e de: %.2f", sLiquid);	
}
