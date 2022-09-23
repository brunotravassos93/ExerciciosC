// Implemente um programa que solicita as notas das duas provas feitas por cada um dos alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova.

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2;
    char continuar;

    
    do 
    {
        // Armazenando as notas do aluno
        printf("Digite a primeira nota do aluno:");
        scanf("%f", &nota1);
        
        if (nota1 != 50)
        {
            printf("Digite a segunda nota do aluno:");
            scanf("%f", &nota2);

            // Cálculo da média

            float media = (nota1 + nota2) / 2;

            printf("%.2f\n\n", media);
        }

        // Verifica se o usuário deseja calcular a média de outro aluno.
        printf("Deseja calcular a média de outro aluno?");
        scanf("%s", &continuar);
        continuar = toupper(continuar);

    } while ((continuar == 'S'));
}