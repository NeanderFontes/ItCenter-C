//Exercicio Estudonauta 20
//Preço de Passagem por Km
//Exercício para condições compostas

//Diretivas de pré-processamento:
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Função principal:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int distanciaTotal;

    //Entrada e saída de dados formatados:
    printf("<<< Preço por Passagem >>>");
    printf("\n======= TABELA DE PREÇOS =======");
    printf("\nViagens até 200Km\tR$0.50/Km");
    printf("\nA partir de 200Km\tR$0.35/Km");
    printf("\n---------------------------------");
    printf("\nQual distância total da viagem em Km? ");
    scanf("%d", &distanciaTotal);
    if(distanciaTotal > 200) {
        printf("\nViagem com %d Km custará = R$%.2f", distanciaTotal, ((float)distanciaTotal * 0.35));
    } else {
        printf("\nViagem com %d Km custará = R$%.2f", distanciaTotal, ((float)distanciaTotal * 0.5));
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}