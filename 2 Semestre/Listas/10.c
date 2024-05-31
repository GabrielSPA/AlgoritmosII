#include <stdio.h>
#include <stdlib.h>
// Função que duplica cada elemento do array
void teste(int x[], int t) {
    while (t > 0) {
        x[--t] *= 2;  // Decrementa t e duplica o valor do elemento correspondente em x
    }
}

int main() {
    int *x = (int *)malloc(sizeof(int) * 5);  // Aloca memória para um array de 5 inteiros
    for (int i = 0; i < 5; i++) {
        x[i] = i + 1;  // Inicializa o array com valores de 1 a 5
    }
    printf("Valor de x[2] = %d\n", x[2]);  // x[2] = 3
    teste(x, 5);  // Chama a função que duplica os valores do array
    printf("Valor de x[2] = %d\n", x[2]);  // x[2] agora será 6 após a duplicação

    free(x);  // Libera a memória alocada
    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}
