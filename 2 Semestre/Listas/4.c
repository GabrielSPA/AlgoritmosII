#include <stdio.h>
#include <stdbool.h>

// Definição da função verificaIntervalo
bool verificaIntervalo(int x, int min, int max) {
    return (x >= min && x <= max);
}

int main() {
    // Exemplos de uso
    int valores[][3] = {
        {5, 1, 10},    // Deve retornar true
    };

    int n = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < n; i++) {
        int x = valores[i][0];
        int min = valores[i][1];
        int max = valores[i][2];
        bool resultado = verificaIntervalo(x, min, max);
        printf("verificaIntervalo(%d, %d, %d) -> %s\n", x, min, max, resultado ? "true" : "false");
    }

    return 0;
}
