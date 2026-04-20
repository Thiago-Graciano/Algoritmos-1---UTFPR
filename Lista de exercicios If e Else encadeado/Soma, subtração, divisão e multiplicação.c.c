#include <stdio.h>

int main() {

    int numero1;
    int numero2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("Qual o primeiro numero? ");
    scanf("%i", &numero1);

    printf("Qual o segundo numero? ");
    scanf("%i", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("a soma dos seus numeros e: %i ", soma);
    printf("\n");
    printf("a subtracao dos seus numeros e: %i ", subtracao);
    printf("\n");
    printf("A multiplicacao dos seus numeros e: %i ", multiplicacao);
    printf("\n");
    printf("A divisao dos seus numeros e: %i ", divisao);

}
