//  Programa que l� 2 n�meros inteiros e determina o seu quociente e resto da
// divis�o inteira.

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
    int num1, num2;
    //Atribui��o e sa�da de valores das vari�veis:
    printf("Insira valores para multiplica��o:");
    printf("1� Valor: ");
    scanf("%d", &num1);
    printf("2� valor: ");
    scanf("%d", &num2);

    //Sa�da de dados:
    printf("(%d)x(%d) = (%d)", num1, num2, (num1*num2));
    printf("\n================================================================\n");

    return 0;
}