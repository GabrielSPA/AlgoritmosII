#include <stdio.h>

int main() {
    char op;
    double M[12][12];
    double media = 0.0;
    int count = 0;

    scanf(" %c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            media += M[i][j];
            count++;
        }
    }

    if (op == 'M') {
       media /= count;
    }

    printf("%.1lf\n", media);

    return 0;
}