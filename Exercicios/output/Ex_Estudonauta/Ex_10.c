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
    char *nomeProduto;
    float precoProduto, precoFinal;
    int descontoProduto;

    //Entrada e sa�da de dados formatados:
    printf("Nome do produto: ");
    fflush(stdin);
    gets(nomeProduto);
    printf("Qual o preço do produto? ");
    fflush(stdin);
    scanf("%f", &precoProduto);
    fflush(stdin);
    printf("Desconto: (%%) ");
    scanf("%d", &descontoProduto);
    precoFinal = (precoProduto - (precoProduto * descontoProduto / 100));

    printf("O Produto %s custava R$%.2f, com desconto de %d%% preço final = R$%.2f", nomeProduto, precoProduto, descontoProduto, precoFinal);
    //Atribui��o e sa�da de valores das vari�veis:
    printf("\n================================================================\n");
    return 0;
}