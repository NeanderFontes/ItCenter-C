//  Constrói um programa que determine se um número inteiro lido, através do 
// teclado, é par ou impar.

//Bibliotecas específicas:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int numEntrada;
    char numAnalisado[10];

    //Entrada e saída de dados formatados:
    printf("Insira um valor inteiro qualquer: ");
    scanf("%d", &numEntrada);
    //Resolução com estrutura de controle if:
    if(numEntrada % 2 == 0) {
        printf("\nNúmero inserido é Par!");
    } else {
        printf("\nNúmero inserido é Impar.");
    }

    //Utilizando operador ternário:
    strcpy(numAnalisado, (numEntrada % 2 == 0) ? "Par" : "Impar");
    printf("\nO Número inserido é %s", numAnalisado);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}