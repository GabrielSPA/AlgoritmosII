#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("O maior valor e: %.2f\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("O maior valor e: %.2f\n", n2);
    } else {
        printf("O maior valor e: %.2f\n", n3);
    }

    if (n1 <= n2 && n1 <= n3) {
        printf("O menor valor e: %.2f\n", n1);
    } else if (n2 <= n1 && n2 <= n3) {
        printf("O menor valor e: %.2f\n", n2);
    } else {
        printf("O menor valor e: %.2f\n", n3);
    }

    if (n1 == n2 && n2 == n3) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Os tres valores nao sao iguais.\n");
    }

    return 0;
}
