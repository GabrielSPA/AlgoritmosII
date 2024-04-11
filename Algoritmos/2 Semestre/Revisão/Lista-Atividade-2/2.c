#include <stdio.h>

int calcularMMC(int num1, int num2) {
    int maior = (num1 > num2) ? num1 : num2;

    int mmc = maior;

    while (1) {
        if (mmc % num1 == 0 && mmc % num2 == 0)
            return mmc;
        mmc += maior;
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int mmc = calcularMMC(num1, num2);

    printf("O MMC de %d e %d é: %d\n", num1, num2, mmc);

    return 0;
}
