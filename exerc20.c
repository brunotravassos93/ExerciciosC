// Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Lendo dois nomes
   char nome1[20];
   char nome2[20];

   printf("Digite o primeiro nome: \n");
   gets(nome1);

   printf("Digite o segundo nome: \n");
   gets(nome2);
}