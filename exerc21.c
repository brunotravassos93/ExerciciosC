// Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares e ímpares, exibindo os resultados na tela.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Variáveis

   int numeros[12], i, pares[12], impares[12];

   // Armazenando os 12 números no vetor
   for (i = 0; i < 12; i++)
   {
      printf("Digite o %dº número: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   
   printf("Estes números são pares: ");
   for (i = 0; i < 12; i++)
   {
      if (numeros[i] % 2 == 0)
      {
         pares[i] = numeros[i];             
         printf("%d ", pares[i]);  
      }
   }

   printf("\n\n");
   printf("Estes números são ímpares: ");
   for (i = 0; i < 12; i++)
   {
      if (numeros[i] % 2 != 0)
      {
         impares[i] = numeros[i];             
         printf("%d ", impares[i]);  
      }
   }
  
}