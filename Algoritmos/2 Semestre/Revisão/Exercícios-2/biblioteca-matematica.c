#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um valor: ");
    scanf("%f", &numero);

    printf("O número elevado ao cubo: %.2f\n", pow(numero, 3));

    printf("O número elevado ao quadrado: %.2f\n", pow(numero, 2));

    printf("A raiz cúbica do número: %.2f\n", cbrt(numero));

    return 0;
}
