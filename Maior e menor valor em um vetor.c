Maior e menor valor em um vetor

int main() {
    int vetor[15], maior, menor;
    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = menor = vetor[0];
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
