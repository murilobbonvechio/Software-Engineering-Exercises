#include <stdio.h>

//Variaveis

int qB, qP, qE;
float pD, tP, pI, rqB, rqP, rqE, rB, drqB, drqP, drqE, iM, txP, rL;


//Codigo Principal
main(){
	printf("\n----------\n S A A S\n   B R\n----------\nPlano 		Mensalidade\nBasico 			R$39.90\nProfissional 		R$89.90\nEmpresarial 		R$199.90\n\n");
	
	printf("\nDigite a quantidade de  clientes Basicos: ");
	scanf("%i", &qB);
	printf("\nDigite a quantidade de  clientes Profissionais: ");
	scanf("%i", &qP);
	printf("\nDigite a quantidade de  clientes Empresariais: ");
	scanf("%i", &qE);
	printf("\nDigite o percentual de desconto: ");
	scanf("%f", &pD);
	printf("\nDigite o percentual de taxa de processamento: ");
	scanf("%f", &tP);
	printf("\nDigite o percentual de imposto: ");
	scanf("%f", &pI);
		// Calculos
	rqB = qB * 39.90; // receita de clientes Básico
	rqP = qP * 89.90; // receita de clientes Profissional
	rqE = qE * 199.90; // receita de clientes Empresarial
	rB = rqB + rqP + rqE; // receita bruta
	drqB = rqB - (rqB*pD/100); // desconto clientes Basicos 
	drqP = rqP - (rqP*pD/100); // desconto clientes Profissionais
	drqE = rqE - (rqE*pD/100); // desconto clientes Empresarial
	iM = pI/100; // Imposto
	txP = tP/100; // Taxa de processamento
	rL= ((drqB * iM)*txP) + ((drqP * iM)*txP) + ((drqE * iM)*txP); // receita liquida
	printf("\n----------\n S A A S\n   B R\n----------\nInformacoes 		Valores\nReceita Bruta 			R$ %.2f \nCl.Basicos 		R$ %.2f \nCl.Profissional 		R$ %.2f \nCl.Empresarial 		R$ %.2f \nReceita Liquida 		R$ %.2f\n", rB, drqB, drqP, drqE, rL);
}
