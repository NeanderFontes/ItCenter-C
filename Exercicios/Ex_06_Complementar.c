// Escreve um programa que leia um numero e que devolva o valor em carácter
// usando TypeCast das unidades acima da tabela código ASCII.

//Bibliotecas específicas:
#include <stdio.h>
#include <locale.h>

//Função main:
int main() {
    //Inicializando biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese"); 
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    int tabelaASCII;

    //Entrada e saída de dados formatados:
    printf("Insira um valor entre 0 - 255: ");
    scanf("%d", &tabelaASCII);
    printf("O Valor insirido \"%d\" = (%c) caractere da Tabela ASCII", tabelaASCII,  ((char)tabelaASCII));

    //Atribuição e saída de valores das variáveis:
    printf("\n================================================================\n");
    return 0;
}