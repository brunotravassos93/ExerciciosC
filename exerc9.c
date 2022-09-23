// Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
// maior ou igual a 9 A
// maior ou igual a 7.5 e menor que 9 B
// maior ou igual a 6 e menor que 7.5 C
// maior ou igual a 4 e menor que 6 D
// menor que 4 E

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Leitura das 3 notas do aluno

   float nota[3], media, media_aproveitamento;
   int i;

   for (i = 0; i < 3; i++)
   {
      printf("Digite a %dª nota:", i + 1);
      scanf("%f", &nota[i]);
   }

   // Cálculo da média do aluno

   media = (nota[0] + nota[1] + nota[2]) / 3;

   // Cálculo da Média de Aproveitamento

   media_aproveitamento = (nota[0] + (nota[1] * 2) + (nota[2] * 3) + media) / 7;

   // Classificação da média de aproveitamento

   if (media_aproveitamento >= 9)
   {
      printf("O aluno obteve média: %.2f e conceito: A", media_aproveitamento);
   }
   else if (media_aproveitamento >= 7.5)
   {
      printf("O aluno obteve média: %.2f e conceito: B", media_aproveitamento);
   }
   else if (media_aproveitamento >= 6)
   {
      printf("O aluno obteve média: %.2f e conceito: C", media_aproveitamento);
   }
   else if (media_aproveitamento >= 4)
   {
      printf("O aluno obteve média: %.2f e conceito: D", media_aproveitamento);
   }
   else if (media_aproveitamento >= 0)
   {
      printf("O aluno obteve média: %.2f e conceito: E", media_aproveitamento);
   }
   else
   {
      printf("Você precisa digitar notas válidas!");
   }
}