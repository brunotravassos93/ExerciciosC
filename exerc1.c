// Faça um programa que solicite 2 números e informe: a soma dos números, o produto do primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo do primeiro número.

#include <stdio.h>
#include <locale.h>
#include <math.h>

float moduloNum1(float num1)
{
   float modulo = sqrt(num1 * num1);
   return modulo;
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // solicitar 2 números do usuário
   float num1, num2;

   printf("Digite o primeiro número: ");
   scanf("%f", &num1);
   printf("Digite o segundo número: ");
   scanf("%f", &num2);

   // 1 - calcular a soma dos números
   float soma = num1 + num2;
   printf("O resultado da soma foi de: %.2f\n", soma);

   // 2 - calcular o produto do primeiro número pelo quadrado do segundo
   float produtoPrimeiroQuadradoSegundo = num1 * (num2 * num2);
   printf("O produto do primeiro número pelo quadrado do segundo deu: %.2f\n", produtoPrimeiroQuadradoSegundo);

   // 3 - calcular o quadrado do primeiro número
   float quadradoPrimeiro = num1 * num1;
   printf("O quadrado do primeiro número é: %.2f\n", quadradoPrimeiro);

   // 4 - calcular a raiz quadrada da soma dos quadrados
   float raizSomaDosQuadrados = sqrt((num1 * num1) + (num2 * num2));
   printf("O resultado da raiz quadrada da soma dos quadrados: %.2f\n", raizSomaDosQuadrados);

   // 5 - calcular o seno da diferença do primeiro número pelo segundo
   float senoDiferenca = sin(num1 - num2);
   printf("O seno da diferença do primeiro número pelo segundo deu: %.2f\n", senoDiferenca);

   // 6 - calcular o módulo do primeiro número

   float resultadoModulo = moduloNum1(num1);
   printf("O módulo do primerio número foi: %.2f", resultadoModulo);

   return 0;
}
