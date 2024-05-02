#include <stdio.h>

#define N 3 // Tamanho da matriz (altere conforme necessário)

int main() {
    int matrizOriginal[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizInvertida[N][N];

    printf("Matriz original:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("|\t%d\t", matrizOriginal[i][j]);
        }
        printf("|\n");
    }

    // Loop que inverte a posição dos valores nas colunas da matriz;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizInvertida[N - 1 - i][j] = matrizOriginal[i][j]; 
            // N - 1 - i preenche a matriz pela linha inversa a qual estamos
            // Assim preenchendo de trás pra frente
        }
    }

    printf("\nMatriz de cabeça para baixo:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("|\t%d\t", matrizInvertida[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
