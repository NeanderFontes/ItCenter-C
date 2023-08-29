//Exercicio Estudonauta 18
//Ano Bissexto
//Exercício para condições compostas

#include <stdio.h>
#include <time.h>
#include <locale.h>

//Função principal:
int main() {
    //Inicialização da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    //Inicialização da biblioteca time:
    time_t tempoSistema;
    time(&tempoSistema);
    struct tm *timeSistem;
    timeSistem = localtime(&tempoSistema);
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int anoAtual = timeSistem->tm_year + 1900;
    int numEntrada;
    
    //Entrada e saída de dados formatados:
    printf("<<< Ano Bissexto >>>");
    printf("\nIntroduza o ano desejado: ");
    scanf("%d", &numEntrada);
    if ((numEntrada % 4 == 0 && numEntrada % 100 != 0) || (numEntrada % 400 == 0)) {
        printf("Ano %d inserido é Bissexto!!!", numEntrada); // É bissexto
    } else {
        printf("Ano %d inserido não é Bissexto!", numEntrada); // Não é bissexto
    }

    //Final do Programa.
    printf("\n================================================================\n");
    
    return 0;
}