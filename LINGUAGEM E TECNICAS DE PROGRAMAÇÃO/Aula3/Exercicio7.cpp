#include <stdio.h>
 //vl: valor do produto, pg: pagamento , tc: troco e tp: total no valor dos produtos
float vlp, pg, tc, tp;
int qt;

main(){
	printf("\nDigite o valor do produto: ");
	scanf("%f", &vlp);
	printf("\nDigite a quantidade do produto: ");	
	scanf("%i", &qt);
    tp = vlp*qt;
    printf("\nO total da compra e de: %.2f , digite o valor a pagar: ", tp);
    scanf("%f", &pg);
    tc=pg-tp;
    if (pg<tp){
	printf("---------------ERRO---------------");
	}
	else if(pg>tp){
    printf("Seu troco e de: R$ %.2f reais", tc);
	}
    
}
