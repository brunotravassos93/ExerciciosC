// Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if" ou o operador de condi��o "?".

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   float preco;

   printf("Digite o pre�o do produto:");
   scanf("%f", &preco);

   while (preco < 100)
   {
      float valor_final = preco * 1.1;
      printf("O valor do produto + 10%% �: %.2f", valor_final);
      break;
   }
   while (preco >= 100)
   {
      float valor_final = preco * 1.2;
      printf("O valor do produto + 20%% �: %.2f", valor_final);
      break;
   }
   
}
