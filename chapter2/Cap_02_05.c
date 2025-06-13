#include <stdio.h>

int main() {
    int valor_inical, valor_temp, milhar, centena, dezena, unidade, valor_invertido;
    
    printf("Entre com o número: \n");
    scanf("%d", &valor_inical);

    valor_temp = valor_inical;
    
    milhar = valor_temp / 1000;
    valor_temp = valor_temp % 1000;
    centena = valor_temp / 100;
    valor_temp = valor_temp % 100;
    dezena = valor_temp / 10;
    valor_temp = valor_temp % 10;
    unidade = valor_temp;

    valor_invertido = unidade * 1000;
    valor_invertido = valor_invertido + (dezena * 100);
    valor_invertido = valor_invertido + (centena * 10);
    valor_invertido = valor_invertido + milhar;

    printf("O númer %d invertido é %d\n", valor_inical, valor_invertido);

    return 0;
}