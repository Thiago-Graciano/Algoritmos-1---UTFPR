#include <stdio.h>

int main() {

    int nota;

    printf("Digite a sua nota: ");
    scanf("%i", &nota);

    if (nota >= 0 && nota <= 20){
        printf("Sua nota e D");
    } else if (nota > 20 && nota <= 35){
        printf("Sua nota e C");
    } else if (nota > 35 && nota <= 60){
        printf("Sua nota foi B");
    } else if (nota > 60 && nota <= 90){
        printf("Sua nota foi A");
    } else {
        printf("Sua nota foi S");
    }
}

