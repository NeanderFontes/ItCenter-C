//  Escreve um programa que determine quantas vezes um determinado
// número inteiro, lido pelo teclado, é divisível por 2.

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
    int numDiv = 0, numEntrada, numSaida;

    //Entrada e saída de dados formatados:
    printf("Insira um valor inteiro: ");
    scanf("%d", &numEntrada);
    numSaida = numEntrada;
    while(numEntrada % 2 == 0) {
        numDiv++;
        numEntrada /= 2;
    }
    printf("O numero %d é divisivel %d vezes por 2!", numSaida, numDiv);
    
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}