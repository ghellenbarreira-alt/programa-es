#lanchonete

int main() {
    int codigo, quantidade;
    double preco, total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    // Definindo o preço com base no código
    if (codigo == 1) {
        preco = 5.00;
    }
    else if (codigo == 2) {
        preco = 3.50;
    }
    else if (codigo == 3) {
        preco = 4.80;
    }
    else if (codigo == 4) {
        preco = 8.90;
    }
    else if (codigo == 5) {
        preco = 7.32;
    }
    else {
        printf("Codigo invalido!\n");
        return 0;
    }

    total = preco * quantidade;

    printf("Valor a pagar: R$ %.2lf\n", total);

    return 0;
}
