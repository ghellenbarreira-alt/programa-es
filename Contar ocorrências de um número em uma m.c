Contar ocorrências de um número em uma matriz 4x4 (função)

int contar_ocorrencias(int m[4][4], int valor) {
    int i, j, cont = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (m[i][j] == valor) cont++;
    return cont;
}

int main() {
    int m[4][4];
    int i, j, x;

    printf("Digite os 16 elementos da matriz 4x4 (linha por linha):\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    printf("Qual numero deseja contar? ");
    scanf("%d", &x);

    int ocorrencias = contar_ocorrencias(m, x);
    printf("O numero %d aparece %d vez(es) na matriz.\n", x, ocorrencias);

    return 0;
}
