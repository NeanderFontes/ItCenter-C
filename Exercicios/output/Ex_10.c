//Preço do produto final com desconto:

//Biblioteca específicas:
#include <stdio.h>
#include <locale.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    char nomeProduto;
    float precoProduto, precoFinal;
    int descontoProduto;

    //Entrada e saída de dados formatados:
    printf("Nome do produto: ");
    gets(nomeProduto);
    printf("Qual o preço do produto? ");
    scanf("%f", &precoProduto);
    printf("Desconto: (%%) ");
    scanf("%d", &descontoProduto);
    precoFinal = (precoProduto - (precoProduto * descontoProduto / 100));

    printf("O Produto %s custava R$%.1f, com desconto de %d%% preço final = R$%.1f", nomeProduto, precoProduto, descontoProduto, precoFinal);
    //Atribuição e saída de valores das variáveis:
    printf("\n================================================================\n");
    return 0;
}