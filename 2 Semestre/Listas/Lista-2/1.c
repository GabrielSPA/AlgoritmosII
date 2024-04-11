#include <stdio.h>

int verificaTriangulo(float lado1, float lado2, float lado3) {
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
        return 1;
    else
        return 0;
}

void tipoTriangulo(float lado1, float lado2, float lado3) {
    if (lado1 == lado2 && lado2 == lado3)
        printf("O triangulo e equilatero.\n");
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        printf("O triangulo e isosceles.\n");
    else
        printf("O triangulo e escaleno.\n");
}

int main() {
    float lado1, lado2, lado3;

    printf("Digite o tamanho dos tres lados do triangulo:\n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (verificaTriangulo(lado1, lado2, lado3)) {
        printf("Os lados formam um triangulo.\n");
        tipoTriangulo(lado1, lado2, lado3);
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
