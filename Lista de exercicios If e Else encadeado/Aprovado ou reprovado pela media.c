#include <stdio.h>

int main() {

    int nota1;

    printf("Digite sua nota (de 0 a 10): ");
    scanf("%i", &nota1);

    if (nota1 >= 6){
        printf("Parabens, aprovado. A sua nota foi: %i", nota1);
    } else {
        printf("Infelizemente nao foi dessa vez. Voce foi reprovado, a sua nota foi: %i", nota1);
    }
}

