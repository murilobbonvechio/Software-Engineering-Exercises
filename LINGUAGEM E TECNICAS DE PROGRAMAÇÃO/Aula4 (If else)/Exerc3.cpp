#include <stdio.h>

// Variaveis

int valor;

//Codigo principal
main(){
	printf("Digite um numero: ");
	scanf("%i", &valor);
	if(valor<0 && valor % 2 == 0){
		printf("O numero e negativo e par");
	 }else if (valor<0 && valor % 2 == 1){
	 	 printf("O numero e negativo e impar");
	 }
	 else if (valor>0 && valor % 2 == 0){
	  	 printf("O numero e positivo e par");
	 } else {
		 printf("O numero e positivo e impar");
	}
}
