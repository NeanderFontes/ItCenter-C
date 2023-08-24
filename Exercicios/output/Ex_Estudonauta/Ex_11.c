//Numero par ou impar utilizando operador ternário:

//Bibliotecas necessárias:
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int numEntrada;
    char situacaoNum;

    //Entrada e saída de dados formatados:
    printf("Digite um numero inteiro: ");
    fflush(stdin);
    scanf("%d", &numEntrada);
    printf("O Número %d digitado é %s", numEntrada, (numEntrada % 2 == 0) ? "Par" : "Impar");

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}