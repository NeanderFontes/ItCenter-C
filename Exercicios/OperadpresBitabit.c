//Operadores bit a bit ou mais conhecidos como Bitwise, s�o opera��es l�gicas que
// utiliza a (&)Conjun��o, (|)Disjun��o e (^)Disjun��o Exclusiva na linguagem C
// equivalendo aos valores de (true = 1) e (false = 0) e ao final da opera��o l�gica
// � somado somente os valores com resultados "1" em base exponencial.

//Bibliotecas necess�rias:
#include <stdio.h>
#include <locale.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese"); 
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    int num1 = 25; // (25)10 = 1 1 0 0 1
    int num2 = 12; // (12)10 =   1 1 0 0
    int numResultado;
    //Entrada e sa�da de dados formatados:
    //Conjun��o:
    numResultado = num1 & num2;
    printf("O n�mero %d & %d = %d", num1, num2, numResultado);
    
    //Disjun��o:
    numResultado = num1 | num2;
    printf("\nO n�mero %d | %d = %d", num1, num2, numResultado);

    //Disjun��o Exclusiva:
    numResultado = num1 ^ num2;
    printf("\nO n�mero %d ^ %d = %d", num1, num2, numResultado);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}