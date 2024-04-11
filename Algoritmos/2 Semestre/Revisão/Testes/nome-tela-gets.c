#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguse");

    char nome[40];

    printf("Digite seu nome: ");
    gets (nome);

    printf("Nome: %s", nome);

    return 0;
}

