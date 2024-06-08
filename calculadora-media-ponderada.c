//Laurian Silva, calculadora de média ponderada
#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float media_ponderada;

    // Ler os quatro números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    printf("Digite o quarto número: ");
    scanf("%f", &num4);

    // Calcular a média ponderada
    media_ponderada = (num1 * 1 + num2 * 2 + num3 * 3 + num4 * 4) / (1 + 2 + 3 + 4);

    // Imprimir a média ponderada
    printf("A média ponderada é: %.2f\n", media_ponderada);

    return 0;
}

