// Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9). Este n�mero deve ser sempre �mpar.
// 1 2 3 4 5 6 7 8 9
// 2 3 4 5 6 7 8
// 3 4 5 6 7
// 4 5 6
// 5

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Armazenar o n�mero digitado pelo usu�rio
   int num, i;

   printf("Digite um n�mero �mpar:");
   scanf("%d", &num);

   //
   for (i = 1; i <= num; i++)
   {
      printf("%d  ", i);
   }
   printf("\n");
   for (i = 2; i <= num - 1; i++)
   {
      printf(" %d ", i);
   }
   printf("\n");
   for (i = 3; i <= num - 2; i++)
   {
      printf("  %d ", i);
   }
   printf("\n");
   for (i = 4; i <= num - 3; i++)
   {
      printf("    %d", i);
   }
   printf("\n");
   for (i = 5; i <= num - 4; i++)
   {
      printf("         %d ", i);
   }
}