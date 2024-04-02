#include <stdio.h>

void multiplicarMatrizes(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n = 2; 
    int m = 3; 
    int p = 2; 

    // Matriz A e B
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    // Matriz C
    int C[2][2];

    // Chamando a função que calcula a multiplicação entre A e B
    multiplicarMatrizes(n, m, p, A, B, C);

    // Exibindo a matriz resultante C
    printf("Matriz resultante C (A * B):\n");
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
