//  Programa que lê 2 números inteiros e determina o seu quociente e resto da
// divisão inteira.

//Bibliotecas em geral:
//Entrada e saída de dados:
#include <stdio.h>
//Bibliteca ortográfica:
#include <locale.h>

//Função main:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    int num1, num2;
    //Atribuição e saída de valores das variáveis:
    printf("Insira valores para multiplicação:");
    printf("1º Valor: ");
    scanf("%d", &num1);
    printf("2º valor: ");
    scanf("%d", &num2);

    //Saída de dados:
    printf("(%d)x(%d) = (%d)", num1, num2, (num1*num2));
    printf("\n================================================================\n");

    return 0;
}