#include <stdio.h>

#define SIZE 5

// Função para imprimir o primeiro triângulo
void primeiroTriangulo(int matriz[SIZE][SIZE]) {
    printf("Primeiro Triangulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para imprimir o segundo triângulo
void segundoTriangulo(int matriz[SIZE][SIZE]) {
    printf("Segundo Triangulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = i; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para imprimir o terceiro triângulo
void terceiroTriangulo(int matriz[SIZE][SIZE]) {
    printf("Terceiro Triangulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para imprimir o quarto triângulo
void quartoTriangulo(int matriz[SIZE][SIZE]) {
    printf("Quarto Triangulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = SIZE - 1; j >= SIZE - i - 1; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matriz[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    primeiroTriangulo(matriz);
    segundoTriangulo(matriz);
    terceiroTriangulo(matriz);
    quartoTriangulo(matriz);

    return 0;
}
