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
    int num;

    //Atribuição e saída de valores das variaveis:
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //Entrada e Saida de dados formatados:
    printf("O Antecessor de (%d) = (%d)", num, (num - 1));
    printf("\nO Sucessor de %d = (%d)", num, (num + 1));
    printf("\n================================================================\n");
}