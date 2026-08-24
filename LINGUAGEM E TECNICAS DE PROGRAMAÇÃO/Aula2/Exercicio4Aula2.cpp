#include <stdio.h>

 float a,b,c;


main(){
	printf("Digite sua comissao bruta da empresa: ");
	scanf("%f", &a);
	b = a * 0.05;
	printf("Sua comissao liquida e de: %f", b);
}
