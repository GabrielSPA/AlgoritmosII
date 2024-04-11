#include <stdio.h>

int primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int somaPrimos(int n) {
    int soma = 0;
    int contador = 0;
    int num = 2;
    while (contador < n) {
        if (primo(num)) {
            soma += num;
            contador++;
        }
        num++;
    }
    return soma;
}

int main() {
    int N;
    printf("Digite a quantidade de números primos que deseja somar: ");
    scanf("%d", &N);
    int resultado = somaPrimos(N);
    printf("A soma dos %d primeiros números primos é: %d\n", N, resultado);
    return 0;
}
