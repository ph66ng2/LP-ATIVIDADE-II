#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int idade;
	char acesso [250];
	
	printf("Qual a sua idade? \n");
	scanf("%d", &idade);
	
	
	if (idade >= 18){
		strcpy(acesso, "Acesso Permitido \n");
	} else {
		strcpy(acesso, "Acesso Negado \n");
	}
	
	printf("%s", acesso);

	}

	
	
	
	

