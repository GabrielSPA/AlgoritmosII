#include <stdio.h>

int main() {
    int linhas = 3;

    for (int i = 1; i <= linhas; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

