#include <stdio.h>

int Fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, Fibonacci(n));
    return 0;
}
