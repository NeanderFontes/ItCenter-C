//Exercicio Estudonauta 18
//Serviço Militar v1.0
//Exercício para condições compostas

//Diretivas de Pré-Processamento:
#include <stdio.h>
#include <locale.h>
#include <time.h>

//Função principal:
int main() {    
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    //Inicializando biblioteca time:
    time_t tempoSistema;
    time(&tempoSistema);
    struct tm *timeSistem;
    timeSistem = localtime(&tempoSistema);
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int anoAtual = timeSistem->tm_year + 1900;
    int anoNascimento;

    //Entrada e saída de dados formatados:
    printf("<<< Serviço Militar v1.0 >>>");
    printf("\nAtualmente estamos no ano de %d",anoAtual);
    printf("\nEm que ano você nasceu? ");
    scanf("%d", &anoNascimento);
    printf("Sua idade é de %d anos", (anoAtual - anoNascimento));
    if((anoAtual - anoNascimento) >= 18) {
        printf("\nVocê já fez 18 anos ou já passou da idade permitida, e espero que tenha se alistado ao Serviço Militar do Brasil.");
    } else {
        printf("\nVocê ainda tem idade permitida para o alistamento de Serviço Militar.");
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}