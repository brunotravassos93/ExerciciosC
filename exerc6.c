// Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if" ou o operador de condição "?".

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   float preco;

   printf("Digite o preço do produto:");
   scanf("%f", &preco);

   while (preco < 100)
   {
      float valor_final = preco * 1.1;
      printf("O valor do produto + 10%% é: %.2f", valor_final);
      break;
   }
   while (preco >= 100)
   {
      float valor_final = preco * 1.2;
      printf("O valor do produto + 20%% é: %.2f", valor_final);
      break;
   }
   
}
