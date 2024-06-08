//Programa, função que solicita os comprimento, altura e largura ao usuário e retorna o volume de uma figura geométrica (paralelepípedo), Laurian  Silva

#include <stdio.h>

double calcular_volume(double comprimento, double altura, double largura) {
    return comprimento * altura * largura;
}

int main() {
    double comprimento, altura, largura;

    // Solicita os valores ao usuário
    printf("Digite o comprimento: ");
    scanf("%lf", &comprimento);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    printf("Digite a largura: ");
    scanf("%lf", &largura);

    // Calcula o volume
    double volume = calcular_volume(comprimento, altura, largura);

    // Exibe o volume calculado
    printf("O volume do paralelepípedo é: %.2f\n", volume);

    return 0;
}

