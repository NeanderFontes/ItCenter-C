//Desenvolver um programa que retorne 2 valores caracteres em tabela ASCIII

//Biblioteca especificas:
#include <stdio.h>
#include <locale.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    char caractere1 = 'A'; caractere2 = 'a';

    //Entrada e sa�da de dados formatados:
    printf("O Caractere '%c' tem valor na tabela ASCII = (%d)", caractere1, caractere1);
    printf("O Caractere '%c' tem valor na tabela ASCII = (%d)", caractere2, caractere2);
    //Atribui��o e sa�da de valores das vari�veis:
    printf("\n================================================================\n");
    return 0;
}