#include <stdio.h>

int main() {
    char nome[50];
    char sobrenome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Nome completo: %s %s\n", nome, sobrenome);

    return 0;
}
