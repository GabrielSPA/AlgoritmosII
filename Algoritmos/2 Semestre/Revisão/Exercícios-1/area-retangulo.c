#include <stdio.h>

int main() {

    double x, y, area;

    printf("Digite o lado de um retângulo: ");
    scanf("%lf", &x);

    printf("Digite o outro lado de um retângulo: ");
    scanf("%lf", &y);

    area = x * y;

    printf("A área do retângulo é: %lf\n", area);

    return 0;
}
