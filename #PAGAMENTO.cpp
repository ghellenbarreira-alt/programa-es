#PAGAMENTO

int main() {
    char nome[50];
    double valorHora, horasTrabalhadas, pagamento;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin); // lê o nome com espaços

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);

    pagamento = valorHora * horasTrabalhadas;

    printf("O pagamento para %s eh de R$ %.2lf\n", nome, pagamento);

    return 0;
}
