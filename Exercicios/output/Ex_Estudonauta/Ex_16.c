//Exerc�cio para condionais simples if:
//utiliza��o de desconto para compras acima de 499?

//Diretivas de pr�-processamento:
#include <stdio.h>
#include <locale.h>

//Fun��o principal:
int main() {
    //Bibliteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    float valorCompras, desconto;

    //Entrada e sa�da de dados formatados:
    printf("Qual foi o valor total das compras? ");
    scanf("%f", &valorCompras);
    desconto = (valorCompras * 10/ 100);
    printf("\t**** Voc� comprou %.2f Euros na loja. ****", valorCompras);
    if(valorCompras >= 500) {
        printf("\n� Como voc� comprou mais de 500,00 Euros na loja.\n� Vai ter %.2f Euros de Desconto!", desconto, valorCompras);
        printf("\n� O Valor a ser pago = %.2f Euros", (valorCompras - desconto));
    } else {
        printf("\n� Volte Sempre!");
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}