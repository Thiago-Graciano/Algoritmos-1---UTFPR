#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero ");
    scanf("%i", &numero);

    if (numero >= 0){
        printf("O numero informado é positivo");
    }
    else if (numero <= 0) {
        printf("O numero informado é negativo");
    }
}

