// Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor que 50.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   int num;

   // Recebendo o n�mero inteiro
   printf("Digite um n�mero inteiro:");
   scanf("%d", &num);

   // Verficiar se � par ou �mpar
   if (num % 2 == 0)
   {
      // � par. Agora verificar se � maior ou igual a 15
      if (num >= 15)
      {
         printf("O n�mero � par e � maior ou igual a 15");
      }
      else
      {
         printf("O n�mero � par, mas N�O � maior ou igual a 15");
      }
   }
   else
   {
      // � �mpar. Agora verificar se � menor ou igual a 50
      if (num < 50)
      {
         printf("O n�mero � �mpar e � menor que 50");
      }
      else
      {
         printf("O n�mero � �mpar e � maior que 50");
      }
   }
}