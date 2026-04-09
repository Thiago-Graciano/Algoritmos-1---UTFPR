#include <stdio.h>

int main() {

    int numero1;
    int numero2;

    printf("Digite um numero ");
    scanf("%i", &numero1);

    printf("\nDigite outro numero ");
    scanf("%i", &numero2);

    if (numero1 > numero2){
        printf("O numero maior é o seu primero numero: %i", numero1);
    } else {
        printf("O numero maior é o seu segundo numero: %i", numero2);
    }
}

