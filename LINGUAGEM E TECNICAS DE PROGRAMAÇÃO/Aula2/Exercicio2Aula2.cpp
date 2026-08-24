#include <stdio.h>

 int atual,nasc,idad;

main(){
	printf("Digite o ano atual: ");
	scanf("%d", &atual);
	printf("Digite o ano de seu nascimento: ");
	scanf("%d", &nasc);
	idad = atual - nasc;
    printf("Sua idade e: %d", idad);
}
