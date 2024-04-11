//Programa que soma os valores de compra
//Autor: Gabriel Almeida
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	//declaração de variáveis do tipo real (float)
	float valorPao, valorCafe, valorPagar;

	printf("Digite o valor do pão: ");
	scanf("%f", &valorPao);

	printf("Digite o valor do Café: ");
	scanf("%f", &valorCafe);

	valorPagar = valorPao + valorCafe;

	printf("\nLista de Compras\n1: Pão: R$ %.2f\n2: Café: R$ %.2f", valorPao, valorCafe);
	printf("\nValor da compra = %.2f", valorPagar);

	return 0;
}
