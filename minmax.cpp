#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int array[] = {30, 5, 43, 32, 24, 1, 60, 50, 30, 100, 203, 32, 303, 5122, 3023, 3, 23, 40, 404, 550, 120, 330, 999, 3220, 244, 459, 3232, 490, 344, 122};
   int i;
   int max = array[0];
   int min = array[0];
   int indice_max, indice_min;

   for (i = 1; i < 30; i++)
   {
      if (array[i] > max)
      {
         max = array[i];
         indice_max = i;
      }
      if (array[i] < min)
      {
         min = array[i];
         indice_min = i;
      }
   }
   printf("O valor máximo do array é: %d e sua posição é: %d\nO valor mínimo do array é: %d e sua posição é: %d\n", max, indice_max+1, min, indice_min+1);

   return 0;
}
