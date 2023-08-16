//Dobro e terça parte do numero, Obs sem Casting.

//Bibliotecas específicas:
#include <stdio.h>
#include <locale.h>

//Função main:
int main() {
    //Inicializaçao da bibliotea ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    int num, numDobro;
    float numTercaParte;

    //Entrada e Saida de dados formatados:
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O dobro de (%d) = (%d)", num, (numDobro = num * 2));
    printf("\nA terça parte de \"%d\" = (%.1f)", num, (numTercaParte = num / 3));
    //Atribuição e saída de valores das variáveis:
    printf("\n================================================================\n");
    return 0;
}