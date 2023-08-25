//Exercício utilizando numeros random (1-99) com Operadores BITWISE:

//Bibliotecas necessárias:
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//Função principal:
int main() {
    //Inicializando biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese"); 

    //Inicializando biblioteca Random:
    srand(time(NULL));
    
    //Inicio do programa:
    printf("\n======================== COMEÇO DO PROGRAMA EM C =======================\n");
    
    //Declaração de variáveis e resultados:
    int num1 = rand() % 30 + 1; //Numeros aleatórios entre (1-30)
    int num2 = rand() % 30 + 1; //Numeros aleatórios entre (1-30)
    int numResultado;
    
    //Entrada e saída de números formatados:
    printf("\t\t+++++++++ OPERAÇÕES BITWISE +++++++++");
    //Resultados com Conjunção:
    numResultado = num1 & num2;
    printf("\n\t\t\tOs Números %d & %d = %d", num1, num2, numResultado);

    //Resultados com Disjunção:
    numResultado = num1 | num2;
    printf("\n\t\t\tOs Números %d | %d = %d", num1, num2, numResultado);
    
    //Resultados com Disjunção Exclusiva:
    numResultado = num1 ^ num2;
    printf("\n\t\t\tOs Números %d ^ %d = %d", num1, num2, numResultado);
    printf("\n\t\t+++++++++++++++++++++++++++++++++++++");
    
    //Final do Programa.
    printf("\n==================================================================\n");
    return 0;
}