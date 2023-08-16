//Numero antecessor e sucesso.

//Bibliotecas específicas:
#include <stdio.h>
#include <locale.h>

//Função main:
void main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variaveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    int num, numAntecessor, numSucessor;

    //Atribuição e saída de valores das variaveis:
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    //Entrada e Saida de dados formatados:
    printf("O Antecessor de (%d) = (%d)\n", num, (numAntecessor = num - 1));
    printf("O Sucessor de %d = (%d)", num, (numSucessor = num + 1));
    printf("\n================================================================\n");
}