/* 
    Escreve um programa que leia sucessivos n�meros inteiros a partir do
    teclado e acumule a sua soma. O programa termina quando o
    n�mero lido for zero, e nessa altura, escreve a soma obtida at� ao
    momento. 
 */

//Diretivas de pr�-processamento:
#include <stdio.h>
#include <locale.h>

//fun��o main principal:
int main() {
    //Bibliteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    int numEntrada = 1, numSoma;

    //Entrada e sa�da de dados formatados:
    while(numEntrada != 0) {
        printf("Insira numeros inteiro: ");
        scanf("%d", &numEntrada);
        numSoma += numEntrada;
    }
    printf("A Soma dos valores inseridos = %d", numSoma);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}