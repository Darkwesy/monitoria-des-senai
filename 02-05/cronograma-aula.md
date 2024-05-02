# Monitoria C

Para compilar os códigos em um computador que possua somente o GCC (compilador de C) é necessário utilizar a seguinte sequencias de comando.

> Comando compilarmos o código:

```
gcc -o nomeArquivoSaida nomeArquivoOrigem.c
```

> Comando para executarmos o código utilizamos:

```bash
./nomeArquivoSaida.exe
```

# Lista exercicios

## **1. Questão**

> Dada uma matriz 3x3 com valores predefinidos, imprima-a na tela com formatação no estilo de tabela.

Exemplo de saida

```bash
Valores presentes na Matriz 3x3:
-------------
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |
-------------
```

### _Resolução Questão 01_

```C
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Valores presentes na Matriz 3x3:\n");
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %d ", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("-------------");
    return 0;
}
```

## **2. Questão**

> Dado o problema anterior, implemente a entrada de dados dos valores da matriz.

### _Resolução Questão 2_

```C
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
```

## **3. Questão**

> Dada uma matriz 5x5 com valores predefinidos, encontre a soma dos valores presentes na sua diagonal e na sua diagonal inversa. Por fim, imprima os dois valores no terminal.

-> Base da matriz

```c
   int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
```

### _Resolução Questão 3_

```c
#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {1, 2, 15, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 22, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int soma_diagonal = 0;
    int soma_diagonal_inversa = 0;

    // A diagonal é sempre composta pelos valores iguais de linha e coluna;
    // A diagonal inversa utiliza a mesma logica mas invertendo o valor, que começa da posição final e vai deduzindo baseado no index do loop;
    for (int i = 0; i < 5; i++) {
        soma_diagonal += matriz[i][i];
        soma_diagonal_inversa += matriz[i][4 - i];
    }

    printf("Diagonal: %d\n", soma_diagonal);
    printf("Diagonal Inversa: %d\n", soma_diagonal_inversa);

    return 0;
}
```

## **4. Questão**

> Utilizando o problema anterior como base, imprima os valores encontrados nas diagonais dentro de um array, contendo assim um array para a diagonal e um array para a diagonal inversa.

### _Resolução Questão 4_

```c
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
```

# **Desafio**

> Dada uma matriz quadrada de tamanho NxN, crie um algoritimo que irá inverter a matriz e imprimir a matriz original e a matriz invertida em formato de tabela.

-> Saida esperada do código.

```bash
Matriz original:
|       1       |       2       |       3       |
|       4       |       5       |       6       |
|       7       |       8       |       9       |

Matriz de cabe├ºa para baixo:
|       7       |       8       |       9       |
|       4       |       5       |       6       |
|       1       |       2       |       3       |
```

## _Resolução desafio_

```c
#include <stdio.h>

#define N 3 // Tamanho da matriz

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
```
