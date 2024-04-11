#include <stdio.h>

int main()
{

    int num; // cria uma variável inteira chamada num

    // armazena o numero informado pelo usuario em num
    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    while (num >= 0)
    {

        // testa se num é par ou impar e exibe a mensagem apropriada
        if (num % 2 == 0)
        {
            printf("O número %i é par\n", num);
        }

        else
        {
            printf("O número %i é impar\n", num);
        }

        // solicita digitação de outro numero
        printf("Digite um numero intero: ");
        scanf("%i", &num);
    }

    printf("Execução finalizada\n");
}