//  Cria um programa que leia dois números reais e que escreva o seu
// produto. Deverá aparecer uma mensagem na tela a indicar ao
// utilizador que este deve inserir o primeiro e o segundo valor.

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
    float num1, num2;
    //Atribuição e saída de valores das variáveis:
    printf("Insira 2 valores decimais:");
    printf("\nInsira 1º valor: ");
    scanf("%f", &num1);
    printf("Insira 2º valor: ");
    scanf("%f", &num2);

    //Saída de dados:
    printf("(%.1f)x(%.1f) = %.1f", num1, num2, (num1 * num2));
    printf("\n================================================================\n");

    return 0;
}