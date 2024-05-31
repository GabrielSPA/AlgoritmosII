#include <iostream>

int main() {
    // Declaração das matrizes m1, m2 e res
    int m1[3][3] = {{2,5,6},{3,5,7},{1,2,3}};
    int m2[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int res[3][3];
    // Soma das matrizes m1 e m2
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
    // Impressão da matriz resultante
    std::cout << "Matriz resultante (soma de m1 e m2):" << std::endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
