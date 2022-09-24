// Dado um número positivo, crie um programa que escreva todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Coletar número do usuário

   int num, quantidade_impares, i = 0;
   printf("Digite um número positivo:");
   scanf("%d", &num);

   // Escrever todos os números ímpares <= num && >= 1.
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