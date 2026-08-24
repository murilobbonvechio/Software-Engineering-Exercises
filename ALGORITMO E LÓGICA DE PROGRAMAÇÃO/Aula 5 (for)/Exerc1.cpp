#include <stdio.h>

//Variaveis

char nome[50];
int aprovados = 0;
int exame = 0;
int reprovados = 0; 
float nota;
float soma = 0, media;

//Codigo Principal
main(){
	for (int i = 1;i<=10;i++){
		printf("\nAluno %d\n", i);
		
		printf("Nome: ");
		scanf("%[^\n]", nome); //Duvidas porque não "%c", &nome
		
		printf("Nota: ");
		scanf("%f", &nota);
		
		soma += nota; //Acumula todas as notas
		
		if(nota>=7){
			printf("%s-Aprovado\n", nome);
			aprovados++;
		}
		else if (nota>=4){
			printf("%s - Exame\n", nome);
			exame++;
		}
		else{
			printf("%s-Reprovadp\n", nome);
			reprovados++;
		}
	}
}
