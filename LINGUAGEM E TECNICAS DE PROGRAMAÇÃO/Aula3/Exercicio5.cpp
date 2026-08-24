#include <stdio.h>

float latao, cobre, zinco;

main(){
	printf("Digite a quantidade de latao que possui: ");
	scanf("%f", &latao);
	cobre=latao*0.7;
	zinco=latao*0.3;
	printf("\nA quantidade de cobre e: %.2f e a quantidade de zinco e: %.2f", cobre, zinco); 	
}
