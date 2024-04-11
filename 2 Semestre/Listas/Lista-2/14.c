#include <stdio.h>

int encontrarMaior(int vetor[], int tamanho);

int main() {
    int vetor[3];
    int i;

    printf("Digite tres valores inteiros:\n");
    for (i = 0; i < 3; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = encontrarMaior(vetor, 3);
    printf("O maior valor digitado e: %d\n", maior);

    return 0;
}

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    int i;

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}
