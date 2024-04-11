#include <stdio.h>

float mediaTurma(int num_alunos) {
    int i, nota;
    float soma = 0;

    printf("Digite as notas dos alunos:\n");
    for (i = 0; i < num_alunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%d", &nota);
        soma += nota;
    }

    return soma / num_alunos;
}

float mediaEscola(int num_turmas) {
    int i, num_alunos;
    float soma = 0;

    for (i = 0; i < num_turmas; i++) {
        printf("Digite o número de alunos da turma %d: ", i + 1);
        scanf("%d", &num_alunos);
        soma += mediaTurma(num_alunos);
    }

    return soma / num_turmas;
}

int main() {
    int num_turmas;

    printf("Digite o número de turmas: ");
    scanf("%d", &num_turmas);

    float media_geral = mediaEscola(num_turmas);

    printf("A média geral da escola é: %.2f\n", media_geral);

    return 0;
}
