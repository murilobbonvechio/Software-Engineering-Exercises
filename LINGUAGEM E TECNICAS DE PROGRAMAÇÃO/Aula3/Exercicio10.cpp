#include <stdio.h>

float a, b, c;

main(){
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	c = b;
	b = a;
	a = c;
	printf("O valor de de A e: %.2f, e o valor de B e: %.2f ", a, b);
}
