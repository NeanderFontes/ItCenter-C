//Exercício para condionais simples if:
//utilização de desconto para compras acima de 499?

//Diretivas de pré-processamento:
#include <stdio.h>
#include <locale.h>

//Função principal:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    float valorCompras, desconto;

    //Entrada e saída de dados formatados:
    printf("Qual foi o valor total das compras? ");
    scanf("%f", &valorCompras);
    desconto = (valorCompras * 10/ 100);
    printf("\t**** Você comprou %.2f Euros na loja. ****", valorCompras);
    if(valorCompras >= 500) {
        printf("\n» Como você comprou mais de 500,00 Euros na loja.\n» Vai ter %.2f Euros de Desconto!", desconto, valorCompras);
        printf("\n» O Valor a ser pago = %.2f Euros", (valorCompras - desconto));
    } else {
        printf("\n» Volte Sempre!");
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}