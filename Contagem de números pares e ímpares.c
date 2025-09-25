Contagem de números pares e ímpares

int main() {
    int vetor[20], pares = 0, impares = 0;
    for (int i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    printf("Pares: %d\nÍmpares: %d\n", pares, impares);
    return 0;
}
