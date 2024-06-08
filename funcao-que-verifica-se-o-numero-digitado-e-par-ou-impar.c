/******************************************************************************
Função que verifica se o programa é par ou ímpar
*******************************************************************************/
#include <stdio.h>
void verificar_par_ou_impar(int numero) {
    if (numero % 2 == 0) {
        printf("%d é par.\n", numero);
    }else{
        printf("%d é ímpar.\n", numero);
        
    }
    }

int main () {
    int numero; 
    
    //Solicita um número ao usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    //Verifica se o número é impar ou par
    verificar_par_ou_impar(numero);
    
    return 0;
}