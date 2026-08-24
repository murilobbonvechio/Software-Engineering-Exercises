#include <stdio.h>

float c, f;

main(){
	printf("\nDigite a temperatura em Fahreinheit: ");
	scanf("%f", &f);
	c = (f-32)*5/9;
	printf("A temperatura em Celsius e: %.2f C", c);
}
