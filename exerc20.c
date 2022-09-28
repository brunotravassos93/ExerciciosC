// Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Lendo dois nomes
   char nomes[2][20], aux[20];
   int i, j;

   for (i = 0; i < 2; i++)
   {
      printf("\nNome %i: ", i + 1);
      scanf("%s", nomes[i]);
   }
   for (i = 0; i < 2; i++) // 2 = qtde de nomes
   {
      for (j = 0; j < 2; j++)
      {
         if (strcmp(nomes[j - 1], nomes[j]) > 0)  
         // Para se comparar o conteúdo de dois strings deve-se usar a função strcmp.
         // Menor que 0: quando encontrar um carácter diferente nas strings e esse carácter da primeira for menor que da segunda. 
         // Igual a 0: quando são iguais.
         // Maior que 0: quando encontrar um carácter diferente nas strings e esse carácter da primeira String for maior que da segunda.
         {
            // Reordenando
            strcpy(aux, nomes[j - 1]);   // strcpy (string_destino,string_origem);
            strcpy(nomes[j - 1], nomes[j]);
            strcpy(nomes[j], aux);
         }
      }
   }

   // Exibe na ordem alfabética
   for (i = 0; i < 2; i++)
   {
      printf("\n%s", nomes[i]);
   }
}
