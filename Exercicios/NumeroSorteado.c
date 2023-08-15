//Sorteando numeros em Linguagem C

//Bibliotecas em geral:
//Entrada e sa�da de dados:
#include <stdio.h>
//Bibliteca ortogr�fica:
#include <locale.h>
//Biblioteca para sortear n�meros:
#include <stdlib.h>
#include <time.h>

//Fun��o main:
int main() {
    //Inicializa��o da Bibliteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");

    //Inicializa��o sortear n�meros:
    srand(time(NULL));
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    int numSorteado = rand() % 10; //Numeros sorteados entre 0 - 9
    // int numSorteado2 = rand() % 11 + 10 //Numeros sorteados entre 10 - 20

    //Atribui��o e sa�da de valores das vari�veis:
    printf("O N�mero Sorteado entre 0 e 9 = (%d)", numSorteado);
    // printf("O N�mero Sorteado entre 10 e 20 = (%d)", numSorteado2);
    printf("\n================================================================\n");
    return 0;
}