#include <stdio.h>

int main() {
    int A, B, troca;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("A = %d, B = %d\n", A, B);

    troca = A;
    A = B;
    B = troca;

    printf("Após a troca:\n");
    printf("A = %d, B = %d\n", A, B);

    return 0;
}
