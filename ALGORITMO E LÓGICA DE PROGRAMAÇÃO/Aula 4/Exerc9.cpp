#include <stdio.h>

//Variaveis

float Qper, Lcons, Plit, Mcons;

//Codigo Principal
main(){
	printf("\nQuantos quilometros foi percorrido: ");
	scanf("%f", &Qper);
	printf("\nQuantos litros foi consumido: ");
	scanf("%f", &Lcons);
	printf("\nQual o preco do combustivel por litro: ");
	scanf("%f", &Plit);
	printf("\nQual a meta do consumo: ");
	scanf("%f", &Mcons);
//Resposta
	printf("\nO consumo medio e de: %.1f Km/L \n", (Qper/Lcons));
	printf("\nO custo total e de: R$ %.2f \n", (Lcons*Plit));
	printf("\nO custo por quilometro e de: R$ %.2f \n", ((Qper/Lcons)*Plit));
	printf("\nA diferença entre o consumo real e a meta e de: %.2f e %.2f\n", (Qper/Lcons), (Qper/Mcons));
		
}
