//Exerc�cio utilizando numeros random (1-99) com Operadores BITWISE:

//Bibliotecas necess�rias:
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//Fun��o principal:
int main() {
    //Inicializando biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese"); 

    //Inicializando biblioteca Random:
    srand(time(NULL));
    
    //Inicio do programa:
    printf("\n======================== COME�O DO PROGRAMA EM C =======================\n");
    
    //Declara��o de vari�veis e resultados:
    int num1 = rand() % 30 + 1; //Numeros aleat�rios entre (1-30)
    int num2 = rand() % 30 + 1; //Numeros aleat�rios entre (1-30)
    int numResultado;
    
    //Entrada e sa�da de n�meros formatados:
    printf("\t\t+++++++++ OPERA��ES BITWISE +++++++++");
    //Resultados com Conjun��o:
    numResultado = num1 & num2;
    printf("\n\t\t\tOs N�meros %d & %d = %d", num1, num2, numResultado);

    //Resultados com Disjun��o:
    numResultado = num1 | num2;
    printf("\n\t\t\tOs N�meros %d | %d = %d", num1, num2, numResultado);
    
    //Resultados com Disjun��o Exclusiva:
    numResultado = num1 ^ num2;
    printf("\n\t\t\tOs N�meros %d ^ %d = %d", num1, num2, numResultado);
    printf("\n\t\t+++++++++++++++++++++++++++++++++++++");
    
    //Final do Programa.
    printf("\n==================================================================\n");
    return 0;
}