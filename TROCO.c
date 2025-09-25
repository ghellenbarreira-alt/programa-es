TROCO

int main() {
    double preco_unitario, dinheiro_recebido, troco;
    int quantidade;

    // Entrada de dados
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unitario);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro_recebido);

    // Cálculo do troco
    troco = dinheiro_recebido - (preco_unitario * quantidade);

    // Saída
    printf("TROCO = %.2lf\n", troco);

    return 0;
}
