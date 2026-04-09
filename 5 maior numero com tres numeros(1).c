/*
   Entrada: numero1, numero2, numero3
   Processamento: numero1 > numero2, numero2 > numero1, numero3 > maior
   Saida: numeroMaior
*/

#include <stdio.h>

int main() {

    int numero1;
    int numero2;
    int numero3;
    int numeroMaior;
    int posicao;

    printf("Digite um numero: ");
    scanf("%i", &numero1);

    printf("Digite outro numero: ");
    scanf("%i", &numero2);

    printf("Digite outro numero: ");
    scanf("%i", &numero3);

    if (numero1 > numero2){
        numeroMaior = numero1;
        posicao = 1;
    } else if (numeroMaior < numero2){
        numeroMaior = numero2;
        posicao = 2;
    } if (numero3 > numeroMaior){
        numeroMaior = numero3;
        posicao = 3;
    }
    printf("O maior valor %i foi o numero %i", numeroMaior, posicao);
}

