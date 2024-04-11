#include <stdio.h>

void rotacao(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int num1 = 5, num2 = 8, num3 = 9;

    printf("Antes da rotação: %d, %d, %d\n", num1, num2, num3);

    rotacao(&num1, &num2, &num3);

    printf("Depois da rotação: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
