//  Escreve um programa que mostre no ecr� os primeiros dez n�meros
// impares.

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
    int numEntrada = 0;

    //Entrada e sa�da de dados formatados:
    printf("Contagem de 0 - 10 Separando n�meros impares:");
    while(numEntrada <= 10) {
        if(numEntrada % 2 != 0) {
            printf(" �%d", numEntrada);
        }
        numEntrada++;
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}