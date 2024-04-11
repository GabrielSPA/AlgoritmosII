#include <stdio.h>

int main() {
    char op;
    double M[12][12];
    double result = 0.0;
    int count = 0;

    scanf(" %c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 1; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            result += M[i][j];
            count++;
        }
    }

    if (op == 'M') {
        result /= count;
    }

    printf("%.1lf\n", result);

    return 0;
}