RETANGULO
#include <math.h> // Necessário para a função sqrt()

int main() {
    double base, altura;
    double area, perimetro, diagonal;

    // Entrada
    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    // Cálculos
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // Teorema de Pitágoras

    // Saída com 4 casas decimais
    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
