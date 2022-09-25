// Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma que as notas são informadas corretamente no intervalo de 1 a 10.

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   float notas[10], soma = 0;
   int i;

   // Armazenando as notas dos 10 alunos.

   for (i = 0; i < 10; i++)
   {
      printf("Digite a nota do %dº aluno: ", i + 1);
      scanf("%f", &notas[i]);
   }
   // Soma das notas

   for (i = 0; i < 10; i++)
   {
      soma = soma + notas[i];
   }
   printf("A soma de todas as notas: %.2f\n", soma);

   // Média das notas

   float media = soma / 10;

   printf("A média de todas: %.2f\n", media);

   // A maior nota

   float maior = notas[0];
   float menor = notas[0];
   for (i = 0; i < 10; i++)
   {
      if (notas[i] > maior)
      {
         maior = notas[i];
      }
      if (notas[i] < menor)
      {
         menor = notas[i];
      }
   }
   printf("A maior nota: %.2f\n", maior);

   printf("A menor nota: %.2f\n", menor);
}