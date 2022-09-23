// Faça um programa que lê dois valores e imprime: (0,1)
// a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
// b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
// c) se ambos forem iguais a mensagem "valores iguais".

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Armazenando dois valores digitados pelo usuário
   int valor1, valor2;
   printf("Digite o primeiro número:");
   scanf("%d", &valor1);

   printf("Digite o segundo número:");
   scanf("%d", &valor2);
   // Se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
   if (valor1 < valor2)
   {
      while (valor1 <= valor2)
      {
         printf("%d ", valor1);
         valor1++;
      }
   }
   else if (valor1 > valor2)
   {
      while (valor2 <= valor1)
      {
         printf("%d ", valor2);
         valor2++;
      }
   }
   else
   {
      printf("Valores iguais.");
   }
}