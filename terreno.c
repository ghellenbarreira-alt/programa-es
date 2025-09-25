terreno

int main() {
    double largura, comprimento, valor_m2;
    double area, preco;

    // Entrada de dados
    printf("Digite a largura do terreno (em metros): ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor_m2);

    // Cálculos
    area = largura * comprimento;
    preco = area * valor_m2;

    // Saída
    printf("Area do terreno = %.2lf m²\n", area);
    printf("Preco do terreno = R$ %.2lf\n", preco);

    return 0;
}
