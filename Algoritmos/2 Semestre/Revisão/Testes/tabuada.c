#include <stdio.h>
int main() {

    int num, i;
    printf("Número para tabuada: ");
    scanf("%i", num);
    for(i = 1, i <= 10, i++){
        printf("%i x %i = %i", num, i, num * i);
    }
    return 0;
}
