// Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene em um vetor, depois o programa dever� apresentar na tela os n�meros na ordem inversa do qual foram digitados.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Recebendo 6 n�meros do usu�rio
   int numeros[6], i;

   for (i = 0; i < 6; i++)
   {
      printf("Digite o %d� n�mero: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // Apresentando os n�meros na ordem inversa

   for (i = 5; i >= 0; i--)
   {
      printf("%d ", numeros[i]);
   }
}