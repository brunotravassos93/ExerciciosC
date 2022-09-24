// Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares menores e/ou iguais a esse n�mero e maiores ou igual a um.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Coletar n�mero do usu�rio

   int num, quantidade_impares, i = 0;
   printf("Digite um n�mero positivo:");
   scanf("%d", &num);

   // Escrever todos os n�meros �mpares <= num && >= 1.
   quantidade_impares = num / 2;

   for (i = 0; i < quantidade_impares; i++)
   {
      printf("%d", (2 * i + 1));
      if (i < quantidade_impares - 1)
      {
         printf(", ");
      }
   }
}