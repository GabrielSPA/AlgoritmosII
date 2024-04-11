#include <stdio.h>

int main() {

    double media, idade, qtd = 0, soma = 0;

    while(1) {

        scanf("%lf", &idade);
        if(idade < 0)
            break;
        else {
            soma += idade;
            qtd ++ ;
        }
    }

    media = soma / qtd;

    printf("%.2lf\n",media);

    return 0;
}