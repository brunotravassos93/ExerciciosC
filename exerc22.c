// Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em seguida, o programa deverá apresentar na tela os resultados.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int numeros[10], i, somatorio_posicao_pares = 0, subtracao_posicao_impares = 0;

   // Armazenando os 10 números no vetor
   for (i = 0; i < 10; i++)
   {
      printf("Digite o %dº número: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // Soma os números localizados nas posições pares.
   for (i = 0; i < 10; i = i + 2)
   {
      somatorio_posicao_pares += numeros[i];
   }
   printf("A soma os números localizados nas posições pares é: %d\n", somatorio_posicao_pares);

   // Atribuição do valor inicial na primeira posição ímpar, para que os demais itens nas posições ímpares subtraiam o valor dele.
   subtracao_posicao_impares = numeros[1];
   for (i = 2; i < 10; i = i + 2)
   {
      subtracao_posicao_impares -= numeros[i];
   }
   printf("A soma os números localizados nas posições ímpares é: %d", subtracao_posicao_impares);
}