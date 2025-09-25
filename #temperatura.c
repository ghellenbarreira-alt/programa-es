#temperatura

int main() {
    char escala;
    double temp, convertido;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf(" %c", &escala); // espaço antes do %c para ignorar enter anterior

    if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temp);
        convertido = (temp - 32) * 5.0 / 9.0;
        printf("Temperatura equivalente em Celsius: %.2lf\n", convertido);
    }
    else if (escala == 'C' || escala == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temp);
        convertido = (temp * 9.0 / 5.0) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", convertido);
    }
    else {
        printf("Escala invalida! Digite apenas C ou F.\n");
    }

    return 0;
}
