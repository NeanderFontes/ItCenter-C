// Escreve um programa que leia um car�cter e que devolva um car�cter
// cujo c�digo num�rico � 3 unidades acima do c�digo do car�cter introduzido.

//Biblioteca especificas:
#include <stdio.h>
#include <locale.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    // char caractere1 = 'A'; caractere2 = 'a';
    char caractere1;

    //Entrada e sa�da de dados formatados:
    printf("Introduza um caractere qualquer: ");
    caractere1 = getchar();
    printf("O Caractere '%c' tem valor na tabela ASCII + 3 unidade = (%d)", caractere1, (caractere1 + 3));
    // printf("O Caractere '%c' tem valor na tabela ASCII = (%d)", caractere2, caractere2);
    //Atribui��o e sa�da de valores das vari�veis:
    printf("\n================================================================\n");
    return 0;
}