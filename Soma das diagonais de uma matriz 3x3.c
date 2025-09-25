Soma das diagonais de uma matriz 3x3

int main() {
    int m[3][3];
    int i, j;
    int soma_principal = 0, soma_secundaria = 0;

    printf("Digite os 9 elementos da matriz 3x3 (linha por linha):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    for (i = 0; i < 3; i++) {
        soma_principal += m[i][i];         // diagonal principal
        soma_secundaria += m[i][2 - i];    // diagonal secundária
    }

    printf("Soma da diagonal principal: %d\n", soma_principal);
    printf("Soma da diagonal secundaria: %d\n", soma_secundaria);

    return 0;
}
