// Escreva um programa que leia um número na base decimal e em seguida imprima esse mesmo número nas bases octal e hexadecimal.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Armazenar o número na base decimal digitado pelo usuario
   int numeroDecimal;
   printf("Digite um número:");
   scanf("%d", &numeroDecimal);

   // Imprimir ele nas bases octal e hexadecimal
   printf("Número em base octal: %o \nNúmero na base hexadecimal: %x", numeroDecimal, numeroDecimal);
}