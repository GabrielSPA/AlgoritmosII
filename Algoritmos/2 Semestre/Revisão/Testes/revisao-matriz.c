#include <stdio.h>
    int main(){

    int tamanho = 5, numeros[tamanho], i, maior = 0;

    for(i = 0, i < tamanho, i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] > maior)
        maior = numeros[i];
    }

    printf("O maior é %d", maior);

    return 0;
}
