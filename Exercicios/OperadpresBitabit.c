//Operadores bit a bit ou mais conhecidos como Bitwise, são operações lógicas que
// utiliza a (&)Conjunção, (|)Disjunção e (^)Disjunção Exclusiva na linguagem C
// equivalendo aos valores de (true = 1) e (false = 0) e ao final da operação lógica
// é somado somente os valores com resultados "1" em base exponencial.

//Bibliotecas necessárias:
#include <stdio.h>
#include <locale.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese"); 
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int num1 = 25; // (25)10 = 1 1 0 0 1
    int num2 = 12; // (12)10 =   1 1 0 0
    int numResultado;
    //Entrada e saída de dados formatados:
    //Conjunção:
    numResultado = num1 & num2;
    printf("O número %d & %d = %d", num1, num2, numResultado);
    
    //Disjunção:
    numResultado = num1 | num2;
    printf("\nO número %d | %d = %d", num1, num2, numResultado);

    //Disjunção Exclusiva:
    numResultado = num1 ^ num2;
    printf("\nO número %d ^ %d = %d", num1, num2, numResultado);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}