// Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor que 50.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   int num;

   // Recebendo o número inteiro
   printf("Digite um número inteiro:");
   scanf("%d", &num);

   // Verficiar se é par ou ímpar
   if (num % 2 == 0)
   {
      // É par. Agora verificar se é maior ou igual a 15
      if (num >= 15)
      {
         printf("O número é par e é maior ou igual a 15");
      }
      else
      {
         printf("O número é par, mas NÃO é maior ou igual a 15");
      }
   }
   else
   {
      // É ímpar. Agora verificar se é menor ou igual a 50
      if (num < 50)
      {
         printf("O número é ímpar e é menor que 50");
      }
      else
      {
         printf("O número é ímpar e é maior que 50");
      }
   }
}