// Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma. O programa deve verificar se a quantidade de alunos é igual a de alunas.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Receber a quantidade de Alunos e Alunas.
   int alunos, alunas;

   printf("Digite quantos Alunos tem na turma:");
   scanf("%d", &alunos);
   printf("Digite quantos Alunas tem na turma:");
   scanf("%d", &alunas);

   if (alunas > alunos)
   {
      int total_alunos = alunas + alunos;
      printf("A turma possui mais Alunas do que Alunos, e o total da turma é de: %d", total_alunos);
   }
   else if (alunas < alunos)
   {
      printf("A turma possui mais Alunos do que Alunas");
   }
   else
   {
      printf("A quantidade de Alunos e Alunas é IGUAL");
   }
}