//Desenvolver um programa que retorne 2 valores caracteres em tabela ASCIII

//Biblioteca especificas:
#include <stdio.h>
#include <locale.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    char caractere1 = 'A'; caractere2 = 'a';

    //Entrada e saída de dados formatados:
    printf("O Caractere '%c' tem valor na tabela ASCII = (%d)", caractere1, caractere1);
    printf("O Caractere '%c' tem valor na tabela ASCII = (%d)", caractere2, caractere2);
    //Atribuição e saída de valores das variáveis:
    printf("\n================================================================\n");
    return 0;
}