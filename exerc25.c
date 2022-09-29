// Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int numeros[10], i, soma = 0, iguais_media = 0;

   for (i = 0; i < 10; i++)
   {
      printf("Digite o %dº número: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // Cálculo da média dos 10 números
   for (i = 0; i < 10; i++)
   {
      soma += numeros[i];
   }

   int media = soma / 10;

   // Verificação se algum dos números é igual à média
   for (i = 0; i < 10; i++)
   {
      if (numeros[i] == media)
      {
         iguais_media++;
      }
   }

   printf("Dentre os 10 números tivemos %d iguais à média.", iguais_media);
}