Intercalação de dois vetores

int main() {
    int v1[5], v2[5], v3[10];
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número do vetor 2: ", i + 1);
        scanf("%d", &v2[i]);
    }
    for (int i = 0; i < 5; i++) {
        v3[2*i] = v1[i];
        v3[2*i+1] = v2[i];
    }
    printf("Vetor intercalado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
    return 0;
}
