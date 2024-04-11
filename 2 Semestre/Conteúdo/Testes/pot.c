#include <stdio.h>
int pot(int x);

pot(int x){
	x = x * x;
	return 0;
}

int main() {
	int t = 10;
	printf("Valor de t = %d\nValor de t ^ 2 = %d", t, pot(t));

	return 0;
}


