#include <stdio.h>

//Variaveis

float rest, rprof, rempr, rtot, pmed, drtot, dpmed;
int est, prof, empr, tp;

//Codigo Principal
main(){
// Thumbnail
printf("\n--------\n E V E N T O\n    D E\n  T E C H\n--------\n");
printf("\nOs ingressos custam:\n\nCategoria		Preco\nEstudante		R$50.00\nProfissional		R$120.00\nEmpresarial		R$250.00\n");
//Solicitações
printf("\nQuantos ingressos de estudantes: ");
scanf("%i", &est);
printf("\nQuantos ingressos profissionais: ");
scanf("%i", &prof);
printf("\nQuantos ingressos empresariais: ");
scanf("%i", &empr);
//Calculos
	tp = est + prof + empr; //Total de participantes
	rest = est * 50; //Receita de estudantes
	rprof = prof * 120; //Receita de profissionais
	rempr = empr * 250; //Receita empresarial
	rtot = rest + rprof + rempr; //Receita total
	pmed = rtot/tp; //Preço médio por participante
	if (rtot>20000){
		//Descontos
		drtot = (rest-(rest*0.05)) + (rprof-(rprof*0.05)) + (rempr-(rempr*0.05));
		dpmed = drtot/tp;
		printf("\n--------\n E V E N T O\n    D E\n  T E C H\n--------\n");
		printf("\nInformacoes sobre o evento:	 Valores\nTotal de participantes:		UN. %i \nReceita total:			 R$ %.2f\nPreço medio por participante:	 R$ %.2f \n", tp, drtot, dpmed);
		printf("\nIngressos comprados:\n\nCategoria		Preco\nEstudante		R$ %.2f \nProfissional		R$ %.2f \nEmpresarial		R$ %.2f \n", (rest-(rest*0.05)), (rprof-(rprof*0.05)), (rempr-(rempr*0.05)));
	} else{
		printf("\n--------\n E V E N T O\n    D E\n  T E C H\n--------\n");
		printf("\nInformacoes sobre o evento:	 Valores\nTotal de participantes:		UN. %i \nReceita total:			 R$ %.2f\nPreço medio por participante:	 R$ %.2f \n", tp, rtot, pmed);
		printf("\nIngressos comprados:\n\nCategoria		Preco\nEstudante		R$ %.2f \nProfissional		R$ %.2f \nEmpresarial		R$ %.2f \n", rest, rprof, rempr);
	}
}
