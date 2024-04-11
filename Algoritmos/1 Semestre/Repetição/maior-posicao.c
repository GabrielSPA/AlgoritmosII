#include <stdio.h>

int main() {

    int numero, posicao, maior = 0, contador = 1;

    while (contador <= 100){

        scanf("%i", &numero);

        if (numero > maior){
            maior = numero;
            posicao = contador;
        }

        contador++;
    }

    printf("%i\n%i\n", maior, posicao);

    return 0;
}