// Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin:

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Recebendo o valor da temperatura
   float temperaturaFahrenheit;
   printf("Digite o valor da temperatura em °F:");
   scanf("%f", &temperaturaFahrenheit);

   // Converter para °C
   float temperaturaCelsius = (temperaturaFahrenheit - 32) * (5 / 9);
   printf("A temperatura em Celsius é: %.2f\n", temperaturaCelsius);

   // Converter para K
   float temperaturaKelvin = ((temperaturaFahrenheit - 32) * (5 / 9)) + 273.15;
   printf("A temperatura em Kelvin é: %.2f", temperaturaKelvin);
}