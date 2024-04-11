#include <stdio.h>

int main() {
    float a, b, c;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    soma = a + b + c;
    subtracao = a - b - c;
    multiplicacao = a * b * c;

    if (c == 0) {
        printf("O terceiro numero nao pode ser zero para a divisao.\n");
    } else {
        divisao = (a + b) / c;

        printf("Soma: %.2f\n", soma);
        printf("Subtracao: %.2f\n", subtracao);
        printf("Multiplicacao: %.2f\n", multiplicacao);
        printf("(a + b) / c: %.2f\n", divisao);
    }

    return 0;
}
