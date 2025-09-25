

int main() {
    int vetor[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("Soma dos elementos: %d\n", soma);
    return 0;
}
