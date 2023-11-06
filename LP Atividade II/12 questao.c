#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{




    int i;
    int nota;
    int soma = 0;
    double media = 0;
    


    for (i = 1; i <= 5; i++)
    {
        
        printf("Escreva uma  nota\n");
        scanf("%d", &nota);


        soma += nota; 

        media = soma / 5;
        
        
    }
    
     printf("Resultado %.1lf \n", media);
}