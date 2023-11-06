#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main() {

  setlocale(LC_ALL, "portuguese");

int i;
int n; 


printf("Digite um numero \n");
scanf("%d", &n);

for ( i = 1; i <= n; i++)
{
  printf("%d \n", i);
  
  switch (i)
  {

  default:
  printf("Carneirinho \n", i);
    break;
  }
}


}