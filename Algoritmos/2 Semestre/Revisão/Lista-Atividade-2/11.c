#include <stdio.h>

int encontrarMenor(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    return menor;
}

int encontrarMaior(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    return maior;
}

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int menor = encontrarMenor(num1, num2, num3);
    int maior = encontrarMaior(num1, num2, num3);

    printf("O menor número é: %d\n", menor);
    printf("O maior número é: %d\n", maior);

    return 0;
}
