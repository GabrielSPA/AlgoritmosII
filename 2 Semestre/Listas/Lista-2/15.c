#include <stdio.h>

int calcularSoma(int vetor[], int tamanho);

int main() {
    int numeros[3];
    int i, soma;

    printf("Digite três números inteiros:\n");
    for (i = 0; i < 3; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    soma = calcularSoma(numeros, 3);

    printf("A soma dos números é: %d\n", soma);

    return 0;
}

int calcularSoma(int vetor[], int tamanho) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}
