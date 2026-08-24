#include <stdio.h>

// Variaveis

float mat, geo, por, fis, medt, recup;

//Código Principal
main(){
	printf("Digite a nota da prova na disciplina de Matematica: \n");
	scanf("%f", &mat);
	printf("Digite a nota da prova na disciplina de Geografia: \n");
	scanf("%f", &geo);
	printf("Digite a nota da prova na disciplina de Portugues: \n");
	scanf("%f", &por);
	printf("Digite a nota da prova na disciplina de Fisica: \n");
	scanf("%f", &fis);
	medt = (mat+geo+por+fis)/4 ;
	printf("%.2f", medt); 
	recup = 7 - medt;
	if (medt >=6){
		printf("\nParabens foi aprovado!");
	} else {
		printf("\nReprovado X");
	}
}
