// Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse mesmo n�mero nas bases octal e hexadecimal.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Armazenar o n�mero na base decimal digitado pelo usuario
   int numeroDecimal;
   printf("Digite um n�mero:");
   scanf("%d", &numeroDecimal);

   // Imprimir ele nas bases octal e hexadecimal
   printf("N�mero em base octal: %o \nN�mero na base hexadecimal: %x", numeroDecimal, numeroDecimal);
}