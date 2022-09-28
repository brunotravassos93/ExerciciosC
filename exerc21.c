// Escreva um programa que leia doze n�meros do tipo inteiro ao usu�rio. Separe esses n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e �mpares, exibindo os resultados na tela.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Vari�veis

   int numeros[12], i, pares[12], impares[12];

   // Armazenando os 12 n�meros no vetor
   for (i = 0; i < 12; i++)
   {
      printf("Digite o %d� n�mero: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // Verificação dos números pares
   printf("Estes n�meros s�o pares: ");
   for (i = 0; i < 12; i++)
   {
      if (numeros[i] % 2 == 0)
      {
         pares[i] = numeros[i];             
         printf("%d ", pares[i]);  
      }
   }

   printf("\n\n");

   // Verificação dos números ímpares
   printf("Estes n�meros s�o �mpares: ");
   for (i = 0; i < 12; i++)
   {
      if (numeros[i] % 2 != 0)
      {
         impares[i] = numeros[i];             
         printf("%d ", impares[i]);  
      }
   }
  
}