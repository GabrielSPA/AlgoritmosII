#include <stdio.h>

int encontrarMenor(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;

    return menor;
}

int main() {
    int num1, num2, num3;

    printf("Digite três números separados por espaços: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int menor = encontrarMenor(num1, num2, num3);

    printf("O menor número é: %d\n", menor);

    return 0;
}
