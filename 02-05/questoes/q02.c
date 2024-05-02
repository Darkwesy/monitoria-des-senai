#include <stdio.h> // Biblioteca standart do C que permite entrada e saida de dados;
#include <windows.h> // Biblioteca que permite utilização de comandos do sistema;

int main() {
    int matriz[3][3]; // Inicializa a matriz

    printf("Insira os valores para a matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        system("cls"); // Limpa o console após ler cada linha.
    }

    system("cls");

    printf("Matriz 3x3:\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("|\t%d\t", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("-------------------------------------------------");

    return 0;
}
