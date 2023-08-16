//Alfabeto com tabela ASCII

//Bibliotecas especificas:
#include <stdio.h>
#include <locale.h>

//Funcao main:
int main() {
    //Inicializacao da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    char tabelaASCII;

    //Entrada e saida de dados formatados:
    printf("Digite alguma letra do alfabeto: ");
    tabelaASCII = getchar();

    printf("Antes do %c vem o alfabeto: %c", tabelaASCII, (tabelaASCII - 1));
    printf("\nDepois do %c vem o alfabeto: %c", tabelaASCII, (tabelaASCII + 1));
    //Atribuição e saída de valores das variáveis:
    printf("\n================================================================\n");
    return 0;
}