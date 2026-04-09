#include <stdio.h>

int main() {
    int pao;
    int cafe;
    int totalDePaes;
    int totalDeCafe;
    int totalDeProdutos;
    float totalAPagar;

    pao = 3;
    cafe = 7;
    printf("Quantos paes voce pegou? ");
    scanf("%i", &totalDePaes);
    printf("Quantos cafes voce pegou? ");
    scanf("%i", &totalDeCafe);
    totalDeProdutos = totalDeCafe + totalDePaes;
    totalAPagar = (totalDePaes * pao) + (totalDeCafe * cafe);
    printf("==================================\n\n Voce comprou %i paes e %i cafes. \n\n---------------------------------\n\n Sendo assim, %i produtos \n\n----------------------------------\n\n Total a pagar: R$%.2f\n\n==================================", totalDePaes, totalDeCafe, totalDeProdutos, totalAPagar);
    return 0;
}