/******************************************************************************

Laurian silva, este programa converte graus celsius e a converte em farenheit

*******************************************************************************/
#include <stdio.h>

int main() {
    float temperatura_celsius, temperatura_farenheit;
    
    //Ler a temperatura em graus celsius
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &temperatura_celsius);
    
    //Converter para farenheit usando a fórmula
    temperatura_farenheit = (9 * temperatura_celsius + 160);
    
    //imprimir a temperatura em farenheit
    printf("A temperatura em graus Fahrenheit é: %.2f\n", temperatura_farenheit);

    return 0;
}
