#include <stdio.h>

//Variáveis
int num;
int par = 0;
int impar = 0;

int main() {
    for(int i = 1; i <=5; i++){
        printf("\nApresente um número positivo inteiro: ");
        scanf("%i", &num);
           if((num%2) == 0){
            par = par + 1;
           }
           if((num%2) != 0){
            impar = impar + 1;
           }
    }
    printf("\nQuantidade de números pares: %i", par);
    printf("\nQuantidade de números ímpares: %i", impar);
}