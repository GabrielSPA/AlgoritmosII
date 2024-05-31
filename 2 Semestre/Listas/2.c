#include <stdio.h>

// Definição da função abs
float abs(float x) {
    if (x < 0)
        x = (-1) * x;
    return x;
}

int main() {
    // a. Apresentar na tela o valor absoluto de -20
    printf("%f\n", abs(-20));

    // b. Guardar na variável aux o valor absoluto de -20
    float aux = abs(-20);

    // Opcional: Apresentar o valor guardado em aux para verificação
    printf("Valor guardado em aux: %f\n", aux);

    return 0;
}
