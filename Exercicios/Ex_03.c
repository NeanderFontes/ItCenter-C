//  Cria um programa que leia dois n�meros reais e que escreva o seu
// produto. Dever� aparecer uma mensagem na tela a indicar ao
// utilizador que este deve inserir o primeiro e o segundo valor.

//Bibliotecas em geral:
//Entrada e sa�da de dados:
#include <stdio.h>
//Bibliteca ortogr�fica:
#include <locale.h>

//Fun��o main:
int main() {
    //Bibliteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    float num1, num2;
    //Atribui��o e sa�da de valores das vari�veis:
    printf("Insira 2 valores decimais:");
    printf("\nInsira 1� valor: ");
    scanf("%f", &num1);
    printf("Insira 2� valor: ");
    scanf("%f", &num2);

    //Sa�da de dados:
    printf("(%.1f)x(%.1f) = %.1f", num1, num2, (num1 * num2));
    printf("\n================================================================\n");

    return 0;
}