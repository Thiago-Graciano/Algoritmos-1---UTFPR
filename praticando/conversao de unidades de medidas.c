/*
Entrada: escolhaMenu, opcaoTemperatura, temperatura, resultadoTemperatura, opcaoDistancia, distancia, resultadoDistancia
Processamento: 
opcaoMenu == 1:
    opcaoTemperatura == 1
        resultadoTemperatura = (9 * temperatura / 5) + 32
    opcaoTemperatura == 2
        resultadoTemperatura = 5 * (temperatura - 32) / 9
    opcaoTemperatura == 3
        resultadoTemperatura = temperatura + 273
opcaoMenu2 == 2:
    opcaoDistancia == 1
        resultadoDistancia = distancia * 0.62137
    opcaoDistancia == 2
        resultadoDistancia = distancia / 0.62137

Saida: "A conversao de C e de F", "A conversao de F e de C", "A conversao de C e de K", "A conversao de Km e de Mi", "A conversao de Mi e de Km"
*/

#include <stdio.h>

int main() {

    int opcaoMenu;
    int opcaoTemperatura;
    int temperatura;
    int resultadoTemperatura;
    int opcaoDistancia;
    float distancia;
    float resultadoDistancia;
    
    printf("Escolha uma opcao\n");
    printf("[1]Conversao de temperatura  [2]Conversao de distancia \n");
    scanf("%i", &opcaoMenu);

    if (opcaoMenu == 1) {
        printf("Escolha uma opcao\n");
        printf("[1]Converter Celsius para Farenheit  [2]Converter Farenheit para Celsius  [3]Converter Converter Celsius para Kelvin\n");
        scanf("%i", &opcaoTemperatura);

        if (opcaoTemperatura == 1) {
            printf("Qual e a temperatura em Celsius? \n");
            scanf("%i", &temperatura);

            resultadoTemperatura = ((9 * temperatura / 5) + 32);
            printf("A conversao de %iC e de %iF", temperatura, resultadoTemperatura);

        } else if (opcaoTemperatura == 2) {
            printf("Qual a temperatura em Farenheit?");
            scanf("%i", &temperatura);

            resultadoTemperatura = 5 * (temperatura - 32) / 9;
            printf("A conversao de %iF e de %iC", temperatura, resultadoTemperatura);

        } else {
            printf("Qual a temperatura em Celsius?");
            scanf("%i", &temperatura);

            resultadoTemperatura = temperatura + 273;
            printf("A conversao de %iC e de %iK", temperatura, resultadoTemperatura);
        }
    } else {
        printf("Escolha uma opcao\n");
        printf("[1]Converter Km para Milhas  [2]Converter Milhas para Km\n");
        scanf("%i", &opcaoDistancia);

        if (opcaoDistancia == 1) {
            printf("Qual a distancia em Km? \n");
            scanf("%f", &distancia);

            resultadoDistancia = distancia * 0.62137;
            printf("A conversao de %.2fKm e de %.2fMi", distancia, resultadoDistancia);
        } else {
            printf("Qual a distancia em Milhas? \n");
            scanf("%f", &distancia);

            resultadoDistancia = distancia / 0.62137;
            printf("A conversao de %.2fMi e de %.2fKm", distancia, resultadoDistancia);
        }
    }

}
