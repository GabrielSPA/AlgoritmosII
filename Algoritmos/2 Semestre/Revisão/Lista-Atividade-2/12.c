#include <stdio.h>

int soma(int a, int b);

int main() {
    int a, b;

    printf("Informe dois valores inteiros:\n");
    scanf("%d %d", &a, &b);

    printf("Soma = %d\n", soma(a, b));

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

