// O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos. Por exemplo, 1�=1, 2�=1+3, 3�=1+3+5, 4�=1+3+5+7, etc. Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int num, i, soma = 0;
   int num_anterior = 1;
   int total;

   // Recebe o n�mero digitado pelo usu�rio
   printf("Digite um n�mero: ");
   scanf("%d", &num);

   // C�lculo do quadrado do n�mero digitado atrav�s da soma dos n primeiros n�meros �mpares consecutivos.

   for (i = 0; i < num; i++)
   {
      soma = soma + ((i * 2) + 1);
   }

   printf("%d", soma);
}