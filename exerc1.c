// Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros, o produto do primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, a raiz quadrada da soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulo do primeiro n�mero.

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

   // solicitar 2 n�meros do usu�rio
   float num1, num2;

   printf("Digite o primeiro n�mero: ");
   scanf("%f", &num1);
   printf("Digite o segundo n�mero: ");
   scanf("%f", &num2);

   // 1 - calcular a soma dos n�meros
   float soma = num1 + num2;
   printf("O resultado da soma foi de: %.2f\n", soma);

   // 2 - calcular o produto do primeiro n�mero pelo quadrado do segundo
   float produtoPrimeiroQuadradoSegundo = num1 * (num2 * num2);
   printf("O produto do primeiro n�mero pelo quadrado do segundo deu: %.2f\n", produtoPrimeiroQuadradoSegundo);

   // 3 - calcular o quadrado do primeiro n�mero
   float quadradoPrimeiro = num1 * num1;
   printf("O quadrado do primeiro n�mero �: %.2f\n", quadradoPrimeiro);

   // 4 - calcular a raiz quadrada da soma dos quadrados
   float raizSomaDosQuadrados = sqrt((num1 * num1) + (num2 * num2));
   printf("O resultado da raiz quadrada da soma dos quadrados: %.2f\n", raizSomaDosQuadrados);

   // 5 - calcular o seno da diferen�a do primeiro n�mero pelo segundo
   float senoDiferenca = sin(num1 - num2);
   printf("O seno da diferen�a do primeiro n�mero pelo segundo deu: %.2f\n", senoDiferenca);

   // 6 - calcular o m�dulo do primeiro n�mero

   float resultadoModulo = moduloNum1(num1);
   printf("O m�dulo do primerio n�mero foi: %.2f", resultadoModulo);

   return 0;
}
