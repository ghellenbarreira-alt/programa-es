#glicose

int main() {
    float glicose;

    printf("Digite a quantidade de glicose no sangue (mg/dl): ");
    scanf("%f", &glicose);

    if (glicose <= 100) {
        printf("Classificacao: Normal\n");
    }
    else if (glicose <= 140) {
        printf("Classificacao: Elevado\n");
    }
    else {
        printf("Classificacao: Diabetes\n");
    }

    return 0;
}
