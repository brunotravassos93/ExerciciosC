// A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 1 em 1.


#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   float temperaturaFahrenheit[36] = {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75};
   float temperaturaCelsius[36];
   int i, j = 0;


   for(i = 0; i <= 35; i++) {
      temperaturaCelsius[j] = (temperaturaFahrenheit[i] - 32.0) * (5.0 / 9.0);
      j++;
   }

   for(i = 0; i <= 35; i++) {
      printf("Celsius: %.2f - Fahrenheit: %.2f\n", temperaturaCelsius[i], temperaturaFahrenheit[i]);
   }
}