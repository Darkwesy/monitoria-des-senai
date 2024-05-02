#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int soma_diagonal = 0;
    int soma_diagonal_inversa = 0;
    int diagonal[5] = {0};
    int diagonal_inversa[5] = {0};

    for (int i = 0; i < 5; i++) {
        soma_diagonal += matriz[i][i];
        diagonal[i] = matriz[i][i];
        soma_diagonal_inversa += matriz[i][4 - i];
        diagonal_inversa[i] = matriz[i][4 - i];
    }

    printf("Soma da diagonal: %d\n", soma_diagonal);
    printf("Soma da diagonal inversa: %d\n", soma_diagonal_inversa);

    printf("Valores da diagonal -> ");
    for (int i = 0; i < 5; i++) {
        printf("| %d ", diagonal[i]);
    }
    printf("|\n");

    printf("Valores da diagonal inversa -> ");
    for (int i = 0; i < 5; i++) {
        printf("| %d ", diagonal_inversa[i]);
    }
    printf("|\n");

    return 0;
}