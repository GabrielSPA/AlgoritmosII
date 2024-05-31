#include <stdio.h>
// Função que dobra os valores de um array
void teste(int x[], int t) {
    // Enquanto t for maior que 0
    while (t > 0) {
        // Decrementa t e dobra o valor no índice t-1
        x[--t] *= 2;
    }
}

int main() {
    // Declara e inicializa um array com 5 elementos
    int x[5] = {1, 2, 3, 4, 5};
    // Imprime o valor do terceiro elemento do array (índice 2)
    printf("Valor de x[2] = %d\n", x[2]); // Deve imprimir: 3
    // Chama a função teste para dobrar os valores do array
    teste(x, 5);
    // Imprime novamente o valor do terceiro elemento do array (índice 2)
    printf("Valor de x[2] = %d\n", x[2]); // Deve imprimir: 6
    return 0;
}
