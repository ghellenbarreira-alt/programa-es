Busca por um elemento específico

int main() {
    int vetor[10], busca, encontrado = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o número a ser buscado: ");
    scanf("%d", &busca);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == busca) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado)
        printf("Número encontrado no vetor.\n");
    else
        printf("Número não encontrado.\n");
    return 0;
}
