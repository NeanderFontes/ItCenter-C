//Pre�o do produto final com desconto:

//Biblioteca espec�ficas:
#include <stdio.h>
#include <locale.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    char nomeProduto;
    float precoProduto, precoFinal;
    int descontoProduto;

    //Entrada e sa�da de dados formatados:
    printf("Nome do produto: ");
    gets(nomeProduto);
    printf("Qual o pre�o do produto? ");
    scanf("%f", &precoProduto);
    printf("Desconto: (%%) ");
    scanf("%d", &descontoProduto);
    precoFinal = (precoProduto - (precoProduto * descontoProduto / 100));

    printf("O Produto %s custava R$%.1f, com desconto de %d%% pre�o final = R$%.1f", nomeProduto, precoProduto, descontoProduto, precoFinal);
    //Atribui��o e sa�da de valores das vari�veis:
    printf("\n================================================================\n");
    return 0;
}