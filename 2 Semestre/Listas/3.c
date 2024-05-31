#include <stdio.h>

void muda(int n);
void muda2();

int main() {
    int n = 5;
    printf(" n = %d antes da chamada de muda\n", n);
    muda(n);
    printf(" n = %d depois da chamada de muda\n", n);

    n = 5;
    printf(" n = %d antes da chamada de muda2\n", n);
    muda2();
    printf(" n = %d depois da chamada de muda2\n", n);

    return 0;
}

void muda(int n) {
    n = 10;
    printf(" n = %d dentro da chamada de muda\n", n);
}

void muda2() {
    int n = 10;
    printf(" n = %d dentro da chamada de muda2\n", n);
}

//n = 5 antes da chamada de muda
//n = 10 dentro da chamada de muda
//n = 5 depois da chamada de muda
//n = 5 antes da chamada de muda2
//n = 10 dentro da chamada de muda2
//n = 5 depois da chamada de muda2
