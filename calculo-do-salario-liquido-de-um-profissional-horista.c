//Laurian silva, programa que calcula salário líquido
#include <stdio.h>

int main() {
    float valor_por_hora, horas_trabalhadas, percentual_inss;
    float salario_bruto, desconto_inss, salario_liquido;

    // Ler os dados do profissional horista
    printf("Digite o valor pago por hora: ");
    scanf("%f", &valor_por_hora);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percentual_inss);

    // Calcular o salário bruto
    salario_bruto = valor_por_hora * horas_trabalhadas;

    // Calcular o desconto do INSS
    desconto_inss = (percentual_inss / 100) * salario_bruto;

    // Calcular o salário líquido
    salario_liquido = salario_bruto - desconto_inss;

    // Imprimir os resultados
    printf("Horas trabalhadas no mês: %.2f\n", horas_trabalhadas);
    printf("Valor da hora: R$ %.2f\n", valor_por_hora);
    printf("Percentual do INSS: %.2f%%\n", percentual_inss);
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Valor do desconto do INSS: R$ %.2f\n", desconto_inss);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}

