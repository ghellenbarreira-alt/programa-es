Soma de duas matrizes 3x3 (função que retorna a terceira)

void soma_matrizes(int a[3][3], int b[3][3], int s[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            s[i][j] = a[i][j] + b[i][j];
}

void ler_matriz3(int m[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
}

void imprimir_matriz3(int m[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

int main() {
    int A[3][3], B[3][3], S[3][3];

    printf("Digite os 9 elementos da matriz A (3x3):\n");
    ler_matriz3(A);
    printf("Digite os 9 elementos da matriz B (3x3):\n");
    ler_matriz3(B);

    soma_matrizes(A, B, S);

    printf("Matriz soma (A + B):\n");
    imprimir_matriz3(S);

    return 0;
}
