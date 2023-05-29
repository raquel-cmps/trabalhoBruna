#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float total (float preco,float porcent, int parcela) {
    float resultado = (preco - (porcent/100 * preco)) / parcela;
    return resultado;
}

int main() {
    float preco;
    int tipo, parcela;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite a forma de pagament: \n 1- a vista\n 2- sem juros ate 5x\n 3- com juros de 6x a 10x\n ");
    scanf("%d", &tipo);

    if (tipo == 2) {
        printf("Digite o numero de parcelas desejadas: ");
        scanf("%d", &parcela);
            if (parcela > 5) {
                printf("O numero de parcelas nao confere com o valor de juros oferecidos!");
                exit(0);
            }
    }
    if (tipo == 3) {
        printf("Digite o numero de parcelas desejadas: ");
        scanf("%d", &parcela);
            if (parcela < 6) {
                printf("O numero de parcelas nao confere com o valor de juros oferecidos!");
                exit(0);
            }
            if (parcela > 10) {
                printf("Numero de parcelas indisponivel");
                exit(0);
            }
            
    }
    
    float resultado = 0;
    switch (tipo) {
        case 1:
            resultado = total(preco, 10, 1);
            printf("O valor para o pagamento a vista com 10porcento de desconto e: %2.f", resultado);
            break;
        case 2: 
            resultado = total(preco, 0, parcela);
                printf("O valor para o pagemnto parcela do %d vezes sem juros e: %2.f", parcela, resultado);
                break;
        case 3: 
            resultado = total(preco, -20, parcela); 
                printf("O valor para o pagamento parcelado em %d vezes COM juros de 20porcento e: %2.f", parcela, resultado);
            break;          
    }

    return(0);
}