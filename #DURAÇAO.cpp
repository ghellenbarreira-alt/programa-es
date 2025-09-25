#DURAÇAO

int main() {
    int duracaoSegundos;
    int horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracaoSegundos);

    horas = duracaoSegundos / 3600;                 // 1 hora = 3600 segundos
    minutos = (duracaoSegundos % 3600) / 60;        // resto dividido por 60
    segundos = duracaoSegundos % 60;                // resto final

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
