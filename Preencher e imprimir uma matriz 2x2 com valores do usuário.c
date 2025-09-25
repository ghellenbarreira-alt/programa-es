Preencher e imprimir uma matriz 2x2 com valores do usuário
int main() {
    int m[2][2];
    int i, j;

    printf("Insira os 4 valores da matriz 2x2 (linha por linha):\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &m[i][j]);

    printf("Matriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }

    return 0;
}
