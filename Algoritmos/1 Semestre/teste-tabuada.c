#include <stdio.h>

int main (){

    int contador = 1;
    int num = 5;

    printf("Digite um núnmero:");
    scanf("%i", &num);

    printf("Tabuada de %i\n", num);
    while(contador <= 20){
        printf("%i x %i = %i\n", num, contador, num*contador);

        contador = contador + 1;
    }

}