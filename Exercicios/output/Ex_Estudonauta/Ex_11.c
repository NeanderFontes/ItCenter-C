//Numero par ou impar utilizando operador tern�rio:

//Bibliotecas necess�rias:
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    int numEntrada;
    char situacaoNum;

    //Entrada e sa�da de dados formatados:
    printf("Digite um numero inteiro: ");
    fflush(stdin);
    scanf("%d", &numEntrada);
    printf("O N�mero %d digitado � %s", numEntrada, (numEntrada % 2 == 0) ? "Par" : "Impar");

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}