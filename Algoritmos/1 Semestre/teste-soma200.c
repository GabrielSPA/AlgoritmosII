#include <stdio.h>

int main (){

    int contador = 1;
    int soma = 0;

    while (contador <= 200){
        soma = soma + contador;

        printf("num: %i, soma: %i\n", contador, soma);

        contador = contador + 1;
    }

}