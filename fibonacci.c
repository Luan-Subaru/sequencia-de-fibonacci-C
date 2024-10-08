#include <stdio.h>

int main()
{
   int n1, a = 0, b = 1, prox;
   
   printf("\tNúmero de Fibonacci!\n\n");
   
   printf("Escolha o n'ésimo número da sequencia: ");
   scanf("%d", &n1);
   
   for(int i = 0; i < 9; i++){
       
       printf("%d ", a);
       
       prox = a + b;
       a = b;
       b = prox;
   }
   
  printf("\n");
   return 0;
}