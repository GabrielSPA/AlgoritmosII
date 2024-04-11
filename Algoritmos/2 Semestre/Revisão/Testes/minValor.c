#include <stdio.h>

int soma(int a, int b);
int sub(int a, int b);
int menor(int a, int b);
int maior(int a, int b);

int main() {
    int a = 10, b = 2;

    printf("Soma = %d\n", soma(a, b));
    printf("Subtração = %d\n", sub(a, b));
    printf("Menor = %d\n", menor(a, b));
    printf("Maior = %d\n", maior(a, b));

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int menor(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
