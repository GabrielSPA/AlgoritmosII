#include <stdio.h>

int main() {

    int q1, q2, codigo;
    double n1, n2, valor;

    scanf("%d %d %lf", &codigo, &q1, &n1);
    scanf("%d %d %lf", &codigo, &q2, &n2);

    valor = (q1 * n1) + (q2 * n2);

    printf("VALOR A PAGAR: R$ %0.2lf\n", valor);

    return 0;
}