#include<stdio.h>
// Definindo a estrutura Aluno
typedef struct 
{
    char nome[50];
    int matricula;
    float media;
} Aluno;


int main (){
    int n, i;
    //numero de alunos.
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    Aluno alunos[n];
    if (n <= 0) {
        printf("Numero de alunos deve ser maior que zero.\n");
        return 1; // Retorna um erro se o número de alunos for inválido.
    }
    // Lê os dados dos alunos
    for (i = 0; i < n; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a media do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }
    // Exibe os dados dos alunos
    printf("\nAlunos Aprovado:\n");
    for (i = 0; i < n; i++)
    {
        if (alunos[i].media >= 7.0)
        {
            printf("Nome: %s, Matricula: %d, Media: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }
    return 0;
}