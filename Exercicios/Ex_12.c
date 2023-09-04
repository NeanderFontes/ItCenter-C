//  Escreve um programa que determine quantas vezes um determinado
// n�mero inteiro, lido pelo teclado, � divis�vel por 2.

//Bibliotecas em geral:
//Entrada e sa�da de dados:
#include <stdio.h>
//Bibliteca ortogr�fica:
#include <locale.h>

//Fun��o main:
int main() {
    //Bibliteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    int numDiv = 0, numEntrada, numSaida;

    //Entrada e sa�da de dados formatados:
    printf("Insira um valor inteiro: ");
    scanf("%d", &numEntrada);
    numSaida = numEntrada;
    while(numEntrada % 2 == 0) {
        numDiv++;
        numEntrada /= 2;
    }
    printf("O numero %d � divisivel %d vezes por 2!", numSaida, numDiv);
    
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}