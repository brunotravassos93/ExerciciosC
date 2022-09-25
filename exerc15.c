// Faça um programa que mostre todos os números pares existentes entre 1 e 50.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int i;

   for(i = 1; i <= 50; i++) {
   // Verifica se o número é par
      if(i % 2 == 0) {
         // Verificação para que após o número 50 não tenha vírgula
         if (i < 50) {
            printf("%d, ", i);
         } else {
            printf("%d", i);
         }
      }
   }

}