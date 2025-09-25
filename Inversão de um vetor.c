Inversão de um vetor

int main() {
    int vetor[10], inverso[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++) {
        inverso[i] = vetor[9 - i];
    }
    printf("Vetor invertido: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", inverso[i]);
    }
    printf("\n");
    return 0;
}
