// Escreva um programa para informar o maior elemento de um vetor de 5 posi��es do tipo inteiro.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   // Declaração das variáveis
   int array[] = {30, 5, 43, 32, 255};
   int i;
   int max = array[0];
   int indice_max;

   // Loop para percorrer o vetor
   for (i = 1; i < 5; i++)
   {
      // Verifica se o número é maior que o máximo atual, se for, substitui seu valor na variável max.
      if (array[i] > max)
      {
         max = array[i];
         indice_max = i;
      }
   }
   printf("O valor m�ximo do array �: %d e sua posi��o �: %d\n", max, indice_max + 1);

   return 0;
}