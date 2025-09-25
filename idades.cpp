idades

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    // Entrada de dados
    printf("Digite o nome da primeira pessoa: ");
    scanf(" %[^\n]", nome1); // lê até encontrar Enter
    printf("Digite a idade de %s: ", nome1);
    scanf("%d", &idade1);

    printf("Digite o nome da segunda pessoa: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a idade de %s: ", nome2);
    scanf("%d", &idade2);

    // Cálculo da média
    media = (idade1 + idade2) / 2.0;

    // Saída
    printf("A idade media de %s e %s eh %.1lf anos\n", nome1, nome2, media);

    return 0;
}
