/******************************************************************************

Laurian Silva, programa que solicita valores inteiros e troca os valores por variáveis

*******************************************************************************/
#include <stdio.h>

int main() {
    int A, B, temp;

    // Ler os valores de A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Trocar os valores usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    // Imprimir os valores trocados
    printf("Depois da troca, o valor de A é: %d\n", A);
    printf("Depois da troca, o valor de B é: %d\n", B);

    return 0;
}
