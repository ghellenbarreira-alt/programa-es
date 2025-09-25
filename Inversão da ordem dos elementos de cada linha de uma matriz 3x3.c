Inversão da ordem dos elementos de cada linha de uma matriz 3x3

int main() {
    int m[3][3];
    int i, j;

    printf("Digite os 9 elementos da matriz 3x3 (linha por linha):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    // Inverter cada linha (in-place)
    for (i = 0; i < 3; i++) {
        int left = 0, right = 2;
        while (left < right) {
            int tmp = m[i][left];
            m[i][left] = m[i][right];
            m[i][right] = tmp;
            left++; right--;
        }
    }

    printf("Matriz apos inverter cada linha:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }

    return 0;
}
