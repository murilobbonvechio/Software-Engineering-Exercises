#include <stdio.h>
//Variáveis
float alt,menor,maior;
//Código principal
int main() {
    printf("Digite a altura da 1 pessoa: ");
    scanf("%f", &alt);
    menor = alt;
    maior = alt;
       for(int i = 2; i <= 5; i++){
        printf("Digite a altura da %d pessoa: ", i);
        scanf("%f", &alt);
        if(alt < menor){
            menor = alt;
        }
        if(alt > maior){
            maior = alt;
        }
       }
       printf("\nA menor altura é: %.2f", menor);
       printf("\nA maior altura é: %.2f", maior);
    }