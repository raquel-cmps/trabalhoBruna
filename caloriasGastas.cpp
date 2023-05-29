#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float media(float time, float calorias) {
    float resultado = time * calorias;
    return resultado;
}

int main() {
    int esporte;
    float time;

    printf("Digite o numero correspondente ao exercicio fisico praticado\nCorrida - 1\nCaminhada - 2\nNatacao - 3\nBicicleta - 4\n");
    scanf("%d", &esporte);

    printf("Digite o tempo realizado, em minutos, da pratica esportiva (%d): ",esporte);
    scanf("%f", &time);

    float kcal = 0;
    float total = 0;

    switch (esporte) {
        case 1:
            kcal = 12;
            total = media(time, kcal);
            break;

        case 2:
            kcal = 9;
            total = media(time, kcal);
            break;

        case 3: 
            kcal = 8.5;
            total = media(time, kcal);
            break;

        case 4: 
            kcal = 6;
            total = media(time, kcal);
            break;

        default:
            printf("Voce digitou um numero nao correspondente!");
    }

    printf("A quantidade de calorias gastas foram de = %2.f", total);
    return 0;
}
