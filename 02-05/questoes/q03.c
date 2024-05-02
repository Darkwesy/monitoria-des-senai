#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {101, 2, 15, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 22, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int soma_diagonal = 0;
    int soma_diagonal_inversa = 0;

    for (int i = 0; i < 5; i++) {
        soma_diagonal += matriz[i][i];
        soma_diagonal_inversa += matriz[i][4 - i];
    }

    printf("Diagonal: %d\n", soma_diagonal);
    printf("Diagonal Inversa: %d\n", soma_diagonal_inversa);

    return 0;
}
