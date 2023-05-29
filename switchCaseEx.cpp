#include <stdio.h>

int main() {
    int num;
    
    printf("Escreva um numero de 1 a 5\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Voce digitou o numero 1");
        break;

    case 2:
        printf("Voce digitou o numero 2");
        break;

    case 3:
        printf("Voce digitou o numero 3");
        break;

    case 4:
        printf("Voce digitou o numero 4");
        break;

    case 5:
        printf("Voce digitou o numero 5");
        break;

    default:
        printf("Voce digitou um numero nao correspondente");
        break;
    }
}