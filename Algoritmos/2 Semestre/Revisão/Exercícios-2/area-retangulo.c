#include <stdio.h>

int main() {
    float x, y, area;

    printf("Digite o valor do lado X do retângulo: ");
    scanf("%f", &x);

    printf("Digite o valor do lado Y do retângulo: ");
    scanf("%f", &y);

    area = x * y;

    printf("A área do retangulo com lado X %.2f e lado Y %.2f eh: %.2f\n", x, y, area);

    return 0;
}
