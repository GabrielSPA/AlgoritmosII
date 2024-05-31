#include <stdio.h>

int main() {
    double valores[100];
    int total, i;
    // Solicita o número de valores
    printf("Digite o numero de valores:\n");
    scanf("%d", &total);
    // Solicita os valores um a um
    printf("Agora digite os numeros:\n");
    for(i = 0; i < total; i++) {
        printf("Digite numero %d:\n", i + 1);
        scanf("%lf", &valores[i]);
    }
    // Calcula a soma dos valores
    double soma = 0.0;
    for(i = 0; i < total; i++) {
        soma += valores[i];
    }
    // Calcula e exibe a média dos valores
    printf("A media dos %d numeros eh %lf\n", total, soma / ((double)total));
    return 0;
}
