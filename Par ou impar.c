#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero ");
    scanf("%i", &numero);

    if (numero == 0){
        printf("O numero informado é zero");
    }
    else if (numero % 2 == 1) {
        printf("O numero informado é impar");
    } else if (numero % 2 == 0) {
        printf("O numero informado é par");
    }

}
