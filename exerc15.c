// Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int i;

   for(i = 1; i <= 50; i++) {
   // Verifica se o n�mero � par
      if(i % 2 == 0) {
         // Verifica��o para que ap�s o n�mero 50 n�o tenha v�rgula
         if (i < 50) {
            printf("%d, ", i);
         } else {
            printf("%d", i);
         }
      }
   }

}