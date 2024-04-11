#include <stdio.h>

int main() {
    float nota, soma = 0;
    int i = 0;

    printf("Digite as 10 notas do aluno:\n");

    while (i < 10) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inválida! Por favor, digite uma nota entre 0 e 10.\n");
            continue;
        }
        soma += nota;
        i++;
    }

    float media = soma / 10;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
