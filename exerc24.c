// Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Recebe a quantia digitada pelo usuário

   float quantia_reais;
   int um = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0, cem = 0;

   printf("Digite um valor em reais:\n");
   scanf("%f", &quantia_reais);

   while (quantia_reais >= 100)
   {
      quantia_reais -= 100;
      cem++;
   }
   while (quantia_reais >= 50)
   {
      quantia_reais -= 50;
      cinquenta++;
   }
   while (quantia_reais >= 20)
   {
      quantia_reais -= 20;
      vinte++;
   }
   while (quantia_reais >= 10)
   {
      quantia_reais -= 10;
      dez++;
   }
   while (quantia_reais >= 5)
   {
      quantia_reais -= 5;
      cinco++;
   }
   while (quantia_reais >= 1)
   {
      quantia_reais -= 1;
      um++;
   }

   printf("%d notas de cem\n%d notas de cinquenta\n%d notas de vinte\n%d notas de dez\n%d notas de cinco\n%d notas de um", cem, cinquenta, vinte, dez, cinco, um);
}