#include <stdio.h>

//Variaveis

char tipo;
float altura, pideal;

//Código Principal
main(){
	printf("\nDigite seu sexo: (H) ou (M)");
	scanf("%c", &tipo);
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	if (tipo == 'H' || tipo == 'h'){
		pideal = ((72.7*altura)-58);
		printf("O peso ideal para um Homem com %.2f de altura e de: %.1f", altura, pideal);
	} else if (tipo == 'M' || tipo == 'm'){
		pideal = ((62.1*altura)-44.7);
		printf("O peso ideal para uma Mulher com %.2f de altura e de: %.1f", altura, pideal);
    } else{
    	printf("Letra invalida utilize entre (H) OU (M)");
	}
}
