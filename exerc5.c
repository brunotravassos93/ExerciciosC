// Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere) para os c�digos de 0 a 127.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int i = 0;

   for(i = 0; i <= 127; i++)
   {
      printf("%d - %x - %c\n", i, i, i);
   }
}