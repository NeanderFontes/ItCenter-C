// Escreve um programa que leia um numero e que devolva o valor em car�cter
// usando TypeCast das unidades acima da tabela c�digo ASCII.

//Bibliotecas espec�ficas:
#include <stdio.h>
#include <locale.h>

//Fun��o main:
int main() {
    //Inicializando biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese"); 
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    int tabelaASCII;

    //Entrada e sa�da de dados formatados:
    printf("Insira um valor entre 0 - 255: ");
    scanf("%d", &tabelaASCII);
    printf("O Valor insirido \"%d\" = (%c) caractere da Tabela ASCII", tabelaASCII,  ((char)tabelaASCII));

    //Atribui��o e sa�da de valores das vari�veis:
    printf("\n================================================================\n");
    return 0;
}