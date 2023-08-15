//Sorteando numeros em Linguagem C

//Bibliotecas em geral:
//Entrada e saída de dados:
#include <stdio.h>
//Bibliteca ortográfica:
#include <locale.h>
//Biblioteca para sortear números:
#include <stdlib.h>
#include <time.h>

//Função main:
int main() {
    //Inicialização da Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");

    //Inicialização sortear números:
    srand(time(NULL));
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    int numSorteado = rand() % 10; //Numeros sorteados entre 0 - 9
    // int numSorteado2 = rand() % 11 + 10 //Numeros sorteados entre 10 - 20

    //Atribuição e saída de valores das variáveis:
    printf("O Número Sorteado entre 0 e 9 = (%d)", numSorteado);
    // printf("O Número Sorteado entre 10 e 20 = (%d)", numSorteado2);
    printf("\n================================================================\n");
    return 0;
}