#include <stdio.h>

int main() {

    int coluna;
    char op;
    double M[12][12];
    double soma = 0;

    scanf(" %d ", &coluna);
    scanf(" %c ", &op);

    for(int i = 0; i < 12; i++){

        for(int j = 0; j < 12; j++){

            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++){
        soma = soma + M[i][coluna];
    }

    if (op == 'S'){
        printf("%.1f\n", soma);
    } else{
        printf("%.1f\n", (soma/12.0));
    }

    return 0;
}