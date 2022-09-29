// Dados um número natural n, exiba seu fatorial n!.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int num, i;

   printf("Digite um número:");
   scanf("%d", &num);

   // Imprime o número digitado
   printf("%d", num);

   // Exibe o fatorial
   for (i = 1; i < num; i++)
   {
      int fatorial = num - i;

      printf(" * %d", fatorial);
   }
}