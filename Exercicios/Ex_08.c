    //  Cria um programa que leia um número inteiro e determine se este é 
    // par e positivo. 

//Bibliotecas específicas:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Funcção main:
int main() {
    //Inicializando biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int numEntrada;
    char analisarNum[10];
    
    //Entrada e saída de dados formatados:
    printf("Insira um valor inteiro: ");
    scanf("%d", &numEntrada);
    //Resolução com estrutura de controle if:
    if(numEntrada % 2 == 0 && numEntrada > 0) {
        printf("\nNumero inserido é Par e Positivo.");
    } else if(numEntrada % 2 == 0 && numEntrada < 0) {
        printf("\nNumero inserido é Par e Negativo");
    } else if(numEntrada % 2 != 0 && numEntrada > 0){
        printf("\nNumero inserido é Impar e Positivo.");
    } else (numEntrada % 2 != 0 && numEntrada < 0){
        printf("\nNumero inserido é Impar e Negativo");
    } else {
        printf("\nNumero inserido é 0")
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}