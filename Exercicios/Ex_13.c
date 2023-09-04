//  Escreve um programa que mostre no ecrã os primeiros dez números
// impares.

//Bibliotecas em geral:
//Entrada e saída de dados:
#include <stdio.h>
//Bibliteca ortográfica:
#include <locale.h>

//Função main:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int numEntrada = 0;

    //Entrada e saída de dados formatados:
    printf("Contagem de 0 - 10 Separando números impares:");
    while(numEntrada <= 10) {
        if(numEntrada % 2 != 0) {
            printf(" »%d", numEntrada);
        }
        numEntrada++;
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}