//Exerc�cio utilizando numeros random (1-99) com Operadores BITWISE de conjun��o,
// disjun��o e disjun��o exclusivo.
// Para Operadores BITWISE left shift e right shift Entrada oelo usu�rio.

//Bibliotecas necess�rias:
#include <stdio.h>
#include <locale.h>
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
    int numResultado, numShift, numDeslocamento;
    
    //Entrada e sa�da de n�meros formatados:
    //Entrada dados pelo usu�rio: 
    printf("\nPara Operadores Left Shift e Right Shift insira valores:");
    printf("\nInsira o valor inteiro: ");
    fflush(stdin);
    scanf("%d", &numShift);
    printf("Quantidade de deslocamento bitwise: ");
    fflush(stdin);
    scanf("%d", &numDeslocamento);
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

    //Left Shift:
    numResultado = numShift << numDeslocamento;
    printf("\n\t\t\tOs N�meros %d << %d = %d", numShift, numDeslocamento, numResultado);
    
    //Right Shift:
    numResultado = numShift >> numDeslocamento;
    printf("\n\t\t\tOs N�meros %d >> %d = %d", numShift, numDeslocamento, numResultado);
    printf("\n\t\t+++++++++++++++++++++++++++++++++++++");
    
    //Final do Programa.
    printf("\n==================================================================\n");
    return 0;
}