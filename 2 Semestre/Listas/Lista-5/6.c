#include <stdio.h>

// Função que recebe um ponteiro para int
void teste(int *x) {
    *x *= 2; // Altera o valor do inteiro apontado pelo ponteiro
}

int main() {
    int x = 10;
    printf("Valor de x=%d\n", x); // x=10
    teste(&x); // Passa o endereço de x para a função teste
    printf("Valor de x=%d\n", x); // x=20
    return 0;
}
