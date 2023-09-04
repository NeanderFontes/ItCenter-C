/* 
    Escreve um programa que leia sucessivos números inteiros a partir do
    teclado e acumule a sua soma. O programa termina quando o
    número lido for zero, e nessa altura, escreve a soma obtida até ao
    momento. 
 */

//Diretivas de pré-processamento:
#include <stdio.h>
#include <locale.h>

//função main principal:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int numEntrada = 1, numSoma;

    //Entrada e saída de dados formatados:
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