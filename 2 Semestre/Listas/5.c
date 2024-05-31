#include <stdio.h>

// Definição da função posicaoDoMaior
int posicaoDoMaior(int a, int b, int c) {
    if (a >= b && a >= c) {
        return 1; // 'a' é o maior
    } else if (b >= a && b >= c) {
        return 2; // 'b' é o maior
    } else {
        return 3; // 'c' é o maior
    }
}

int main() {
    // Exemplos de uso
    int a, b, c;

    a = 5; b = 10; c = 3;
    printf("posicaoDoMaior(%d, %d, %d) -> %d\n", a, b, c, posicaoDoMaior(a, b, c));

    return 0;
}
