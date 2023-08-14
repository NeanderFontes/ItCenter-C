// Cria um programa que troque o valor de duas variáveis x e y,
//respetivamente com os valores 2.50 e 3.50. O programa ainda deverá
//imprimir uma mensagem com o novo valor de cada variável.

//Bibliotecas em geral:
//Entrada e saída de dados:
#include <stdio.h>

//Função main:
int main() {
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    float x = 2.5, y = 3.5, auxiliar;
    auxiliar = x;
    x = y;
    y = auxiliar;
    
    //Atribuição e saída de valores das variáveis:
    printf("Valores finais: \nX = %.2f\nY = %.2f\n", x, y);
    printf("\n================================================================\n");
    return 0;
}