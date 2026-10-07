#include <stdio.h>
 //Variáveis    
int soma = 0;
//Código principal
int main() {
    for(int i = 11; i <= 20; i+=2){
        soma = soma + i;
    }
    printf("A soma dos números ímpares entre 11 e 20 é: %i\n", soma);
}