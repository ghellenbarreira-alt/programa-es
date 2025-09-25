Cálculo de produto escalar

int main() {
    int v1[5], v2[5], produto = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número do vetor 2: ", i + 1);
        scanf("%d", &v2[i]);
    }
    for (int i = 0; i < 5; i++) {
        produto += v1[i] * v2[i];
    }
    printf("Produto escalar: %d\n", produto);
    return 0;
}
