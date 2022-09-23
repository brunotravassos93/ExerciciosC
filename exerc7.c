// Implemente um programa que solicita as notas das duas provas feitas por cada um dos alunos de uma turma (as notas t�m de estar no intervalo [0 10]) e imprime para cada um a m�dia das notas. O programa deve parar imediatamente ap�s ter sido digitado o valor 50 para a nota da primeira prova.

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

            // C�lculo da m�dia

            float media = (nota1 + nota2) / 2;

            printf("O aluno apresentou média: %.2f\n\n", media);
        }

        // Verifica se o usu�rio deseja calcular a m�dia de outro aluno.
        printf("Deseja calcular a m�dia de outro aluno?");
        scanf("%s", &continuar);
        continuar = toupper(continuar);

    } while ((continuar == 'S'));
}