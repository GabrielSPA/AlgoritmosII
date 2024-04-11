#include <stdio.h>

int main() {

   int num;
   int divisor = 1;

   scanf("%i", &num);

   while (divisor <= num){

        if (num % divisor == 0){
            printf("%i\n", divisor);
        }

    divisor = divisor + 1;

   }

    return 0;
}