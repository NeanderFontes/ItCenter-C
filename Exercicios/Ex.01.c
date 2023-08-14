//• Cria um programa que calcule a média de dois números x e y,
//  respetivamente com os valores 1.50 e 3.50;

//Bibliotecas em geral:
//Entrada e saída de dados:
#include <stdio.h>

//Função main:
int main() {
    //Declaração de variáveis e resultados:
    float x, y, media;
    x = 1.5;
    y = 3.5;
    media = (x + y) / 2;

    //Atribuição e saída de valores das variáveis:
    printf("O valor da Média = %.1f", media);
    return 0;
}