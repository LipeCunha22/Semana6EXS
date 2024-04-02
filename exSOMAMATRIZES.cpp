#include <stdio.h>

void somaMatrizes(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n = 3; //número de linhas
    int m = 3; //número de colunas

    //Matrizes A e B
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    //Matriz C para armazenar a soma
    int C[3][3];

    //Chamando a função que calcula soma das matrizes
    somaMatrizes(n, m, A, B, C);

    // Exibindo a matriz resultante C
    printf("Matriz resultante C (A + B):\n");
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
