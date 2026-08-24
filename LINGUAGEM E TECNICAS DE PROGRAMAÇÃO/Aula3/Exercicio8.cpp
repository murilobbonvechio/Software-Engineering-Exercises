#include <stdio.h>

float c, f;

main(){
	printf("\nDigite a temperatura em Celsius: ");
	scanf("%f", &c);
	f = ((9 * c + 160)/5);
	printf("A temperatura em Fahreinheit e: %.2f F", f);
}
