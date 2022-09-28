// Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses dez n�meros em um vetor. Para os valores dos elementos inseridos nas posi��es pares desse vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. Em seguida, o programa dever� apresentar na tela os resultados.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int numeros[10], i, somatorio_posicao_pares = 0, subtracao_posicao_impares = 0;

   // Armazenando os 10 n�meros no vetor
   for (i = 0; i < 10; i++)
   {
      printf("Digite o %d� n�mero: \n", i + 1);
      scanf("%d", &numeros[i]);
   }

   // Soma os n�meros localizados nas posi��es pares.
   for (i = 0; i < 10; i = i + 2)
   {
      somatorio_posicao_pares += numeros[i];
   }
   printf("A soma os n�meros localizados nas posi��es pares �: %d\n", somatorio_posicao_pares);

   // Atribui��o do valor inicial na primeira posi��o �mpar, para que os demais itens nas posi��es �mpares subtraiam o valor dele.
   subtracao_posicao_impares = numeros[1];
   for (i = 2; i < 10; i = i + 2)
   {
      subtracao_posicao_impares -= numeros[i];
   }
   printf("A soma os n�meros localizados nas posi��es �mpares �: %d", subtracao_posicao_impares);
}