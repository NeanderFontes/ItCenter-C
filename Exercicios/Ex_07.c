//  Constr�i um programa que determine se um n�mero inteiro lido, atrav�s do 
// teclado, � par ou impar.

//Bibliotecas espec�ficas:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    int numEntrada;
    char numAnalisado[10];

    //Entrada e sa�da de dados formatados:
    printf("Insira um valor inteiro qualquer: ");
    scanf("%d", &numEntrada);
    //Resolu��o com estrutura de controle if:
    if(numEntrada % 2 == 0) {
        printf("\nN�mero inserido � Par!");
    } else {
        printf("\nN�mero inserido � Impar.");
    }

    //Utilizando operador tern�rio:
    strcpy(numAnalisado, (numEntrada % 2 == 0) ? "Par" : "Impar");
    printf("\nO N�mero inserido � %s", numAnalisado);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}