#include <stdio.h>
 //Variáveis
 int num;
 //Código principal
 int main() {
    printf("\n--------------------------------\n");
    printf(" T A B U A D A ");
    printf("\n--------------------------------\n");
    printf("\nDigite um número inteiro: ");
    scanf("%i", &num);
    printf("\n--------------------------------\n");
    printf(" Tabuada do %i:\n", num);
    printf("--------------------------------\n");
    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", num, i, num*i);
    }
    printf("--------------------------------\n");
 }