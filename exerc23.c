// Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Recebendo 6 números do usuário
   int numeros[6], i;

   for (i = 0; i < 6; i++)
   {
      printf("Digite o %dº número: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // Apresentando os números na ordem inversa

   for (i = 5; i >= 0; i--)
   {
      printf("%d ", numeros[i]);
   }
}