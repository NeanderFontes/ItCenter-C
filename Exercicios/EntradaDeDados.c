//Entrada de dados formatados em C

//Bibliotecas em Geral:
#include <stdio.h>

//Função main:
int main() {
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    char *nome;
    char sexo1;
    char sexo2;
    int numInteiro;
    float numDecimal;

    //Atribuição de entrada e saída de valores em caracteres:
    printf("Qual o seu nome?");
    gets(nome);
    printf("Sexo (M/F)? ");
    scanf(" %c", &sexo1);
    //Teste de repetição para entrada de 2 ou mais caractere simples:
    printf("Sexo (M/F)? ");
    scanf(" %c", &sexo2);

    //Atribuição de entrada e saída de valores em numeros:
    printf("Digite um numero inteiro: ");
    scanf("%d", &numInteiro);
    printf("Digite um numero decimal: ");
    scanf("%f", &numDecimal);

    //Resultado final:
    printf("Olá %s, do sexo1(%c), sexo2(%c) Os numeros digitados foram: Inteiro(%d) e Decimal(%.1f)", nome, sexo1, sexo2, numInteiro, numDecimal);
    printf("\n================================================================\n");
    return 0;
}