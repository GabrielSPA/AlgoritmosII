#include <stdio.h>

int somatorio(int n) {
    int resultado = 0;
    for (int i = 1; i <= n; i++) {
        resultado += i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = somatorio(n);
    printf("O somatório de 1 até %d é: %d\n", n, resultado);

    return 0;
}
