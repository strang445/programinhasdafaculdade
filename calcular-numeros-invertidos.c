#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, numero_invertido;

    // Ler o número
    printf("Digite um número no formato centena-dezena-unidade: ");
    scanf("%d", &numero);

    // Extrair as centenas, dezenas e unidades
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    // Inverter o número
    numero_invertido = (unidade * 100) + (dezena * 10) + centena;

    // Imprimir o número invertido
    printf("O número invertido é: %d\n", numero_invertido);

    return 0;
}
