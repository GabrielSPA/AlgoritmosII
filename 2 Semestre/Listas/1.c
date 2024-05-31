int funcao_c (int c);
int funcao_b (int i);
int funcao_a (int n);
int main () {
    int result;
    result = funcao_a(10);  // 1ª chamada: funcao_a(10)
    printf ("Resultado = %d" , result);
}

int funcao_c (int c) {
    return (c/2);           // 5ª retorno: resultado de funcao_c
    }
int funcao_b (int i) {
    int k;
    k = funcao_c (i-3) * 3 ; // 3ª chamada: funcao_c(i-3)
    return (k);              // 4ª retorno: resultado de funcao_b
    }
    int funcao_a (int n) {
        int x;
        x = funcao_b (n-1) + 6;  // 2ª chamada: funcao_b(n-1)
        return (x);              // 6ª retorno: resultado de funcao_a
    }
