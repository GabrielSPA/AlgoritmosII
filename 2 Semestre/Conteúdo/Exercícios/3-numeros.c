#include <stdio.h>

int main() {
    float num1, num2, num3;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    soma = num1 + num2 + num3;
    subtracao = num1 - num2 - num3;
    multiplicacao = num1 * num2 * num3;

    if (num2 != 0 && num3 != 0) {
        divisao = num1 / num2 / num3;
        printf("A divisão entre os números: %.2f\n", divisao);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    printf("A soma entre os números: %.2f\n", soma);
    printf("A subtração entre os números: %.2f\n", subtracao);
    printf("A multiplicação entre os números: %.2f\n", multiplicacao);

    return 0;
}
