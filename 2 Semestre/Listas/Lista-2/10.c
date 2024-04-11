#include <stdio.h>

int encontrarMaior(int num1, int num2, int num3) {
    int maior;

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    return maior;
}

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = encontrarMaior(num1, num2, num3);

    printf("O maior número é: %d\n", maior);

    return 0;
}
