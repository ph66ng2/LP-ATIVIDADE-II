#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
  int comando;
  
  do {
    
    
    printf("1 - Camiseta \n");
    printf("2 - Calça \n");
    printf("3 - Sapato \n");
    printf("4 - Sair \n");
    scanf("%d", &comando);

    switch(comando){

      case 1:
      printf("Camiseta \n");
      printf("R$ 60,00 \n");
      break;
      
      case 2:
      printf("Calça \n");
      printf("R$ 120,00 \n");
      break;
      
      case 3:
      printf("Sapato \n");
      printf("R$ 250,00  \n");
      break;
      
      default:
      printf("Progama Encerrado \n");
      return 0;
      break;
    }
    
  } while (comando != 4);
  
}