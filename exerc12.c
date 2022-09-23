// Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem � o mais velho. Considere que essas pessoas possuem idades diferentes.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int idades[3];
   int i;

   // Armazena as idades dos tr�s.
   printf("Digite a idade de Pedro:");
   scanf("%d", &idades[0]);
   printf("Digite a idade de Joana:");
   scanf("%d", &idades[1]);
   printf("Digite a idade de Ismael:");
   scanf("%d", &idades[2]);

   int mais_velho = idades[0];
   // Comparar as idades dos 3 e informar quem � o mais velho.

   for (i = 0; i < 3; i++)
   {
      if (idades[i] > mais_velho)
      {
         mais_velho = idades[i];
      }
   }

   printf("O mais velho tem %d anos\n", mais_velho);

   if (idades[0] == mais_velho)
   {
      printf("O mais velho � Pedro");
   }
   else if (idades[1] == mais_velho)
   {
      printf("A mais velha � Joana");
   }
   else if (idades[2] == mais_velho)
   {
      printf("O mais velho � Ismael");
   }
}