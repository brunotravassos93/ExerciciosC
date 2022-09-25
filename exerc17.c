// O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int num, i, soma = 0;
   int num_anterior = 1;
   int total;

   // Recebe o número digitado pelo usuário
   printf("Digite um número: ");
   scanf("%d", &num);

   // Cálculo do quadrado do número digitado através da soma dos n primeiros números ímpares consecutivos.

   for (i = 0; i < num; i++)
   {
      soma = soma + ((i * 2) + 1);
   }

   printf("%d", soma);
}