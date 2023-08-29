//Exercicio Estudonauta 21
//Numero Inverso ou Oposto
//Exercício para condições compostas

//Diretivas de pré-processamento:
#include <stdio.h>
#include <locale.h>

//Função principal:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int numEntrada;

    //Entrada e saída de dados formatados:
    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &numEntrada);
    if(numEntrada > 0) {
        printf("O Número Inverso de %d = (%.2f)", numEntrada, (1 / (float)numEntrada));
    } else {
        printf("O Número Oposto de %d = (%d)", numEntrada, (numEntrada * -1));
    }

    //Final do Programa.
    printf("\n================================================================\n");
    
    return 0;
}