#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	double nota;
	char avaliacao [260];
	
	printf("Digite a nota do aluno \n");
	scanf("%lf", &nota);
	
	
		
	while (nota != 10){
	
	
	
	
	
	if (nota >= 9){
		strcpy(avaliacao, "Excelente \n");
	} else if (nota > 7 && nota < 8.9){
		strcpy(avaliacao, "Bom \n");
	} else if (nota > 5 && nota < 6.9){
		strcpy(avaliacao, "Razoavel \n");
	} else if ( nota < 5){
		strcpy(avaliacao, "Insuficiente");
	}
}
	
	
	printf("Resultado: %s", avaliacao);
	
	}

	
	
	
	

