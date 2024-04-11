#include <stdio.h>

int main() {

    int n[10], i, x, v;

    scanf("%d", &x);

    for (v = 0, i = x; v < 10; i *= 2, v++) {
        n[v] = i;
    }

    for (i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
}