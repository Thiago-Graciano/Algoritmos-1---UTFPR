#include <stdio.h>

int main() {

    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade >= 0 && idade <= 13){
        printf("Voce e crianca");
    } else if (idade > 13 && idade < 18){
        printf("Voce e adolescente");
    } else if (idade >= 18 && idade <= 60){
        printf("Voce e adulto");
    } else if (idade < 0) {
        printf("Voce ainda nao existe");
    } else {
        printf("Voce e idoso");
    }
}

