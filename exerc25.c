// Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos valores � igual a m�dia dos mesmos.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int numeros[10], i, soma = 0, iguais_media = 0;

   for (i = 0; i < 10; i++)
   {
      printf("Digite o %d� n�mero: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // C�lculo da m�dia dos 10 n�meros
   for (i = 0; i < 10; i++)
   {
      soma += numeros[i];
   }

   int media = soma / 10;

   // Verifica��o se algum dos n�meros � igual � m�dia
   for (i = 0; i < 10; i++)
   {
      if (numeros[i] == media)
      {
         iguais_media++;
      }
   }

   printf("Dentre os 10 n�meros tivemos %d iguais � m�dia.", iguais_media);
}