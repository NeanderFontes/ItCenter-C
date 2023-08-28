// Cria um programa que determine se um n�mero real lido atrav�s do 
// teclado se encontra no intervalo [1.0,1.9].

//Bibliotecas necess�rias:
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
    float numEntrada;

    //Entrada e sa�da de dados formatados:
    printf("Introduza um n�mero decimal: ");
    scanf("%f", &numEntrada);
    if(numEntrada >= 1.0 && numEntrada <= 1.9) {
        printf("O N�mero (%.1f) encontra-se no intervalo");
    } else {
        printf("O N�mero (%.1f) n�o encontra-se no intervalo");
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}