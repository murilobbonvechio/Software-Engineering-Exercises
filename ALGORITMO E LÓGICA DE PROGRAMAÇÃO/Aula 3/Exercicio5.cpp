#include <stdio.h>

// Variaveis

float trab, proj, prov, semi, medt, recup;

//Código Principal
main(){
	printf("Digite a nota do trabalho na disciplina de Engenharia de Software: \n");
	scanf("%f", &trab);
	printf("Digite a nota do projeto na disciplina de Engenharia de Software: \n");
	scanf("%f", &proj);
	printf("Digite a nota da prova na disciplina de Engenharia de Software: \n");
	scanf("%f", &prov);
	printf("Digite a nota do seminario na disciplina de Engenharia de Software: \n");
	scanf("%f", &semi);
	medt = ((trab*0.2)+(proj*0.3)+(prov*0.3)+(semi*0.2));
	printf("%.2f", medt); 
	recup = 7 - medt;
	if (medt >=7){
		printf("\nParabens foi aprovado!");
	} else if (medt>=5){
		printf("\nVoce ficou de recuperacao, precisa de %.2f para alcancar a media", recup);
	} else{
		printf("\nReprovado X");
	}
}
