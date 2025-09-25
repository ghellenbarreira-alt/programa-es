#dardo

int main() {
    float d1, d2, d3, maior;

    printf("Digite a distancia do primeiro arremesso: ");
    scanf("%f", &d1);

    printf("Digite a distancia do segundo arremesso: ");
    scanf("%f", &d2);

    printf("Digite a distancia do terceiro arremesso: ");
    scanf("%f", &d3);

    // Inicialmente considera o primeiro como o maior
    maior = d1;

    if (d2 > maior) {
        maior = d2;
    }
    if (d3 > maior) {
        maior = d3;
    }

    printf("A maior distancia foi: %.2f\n", maior);

    return 0;
}
