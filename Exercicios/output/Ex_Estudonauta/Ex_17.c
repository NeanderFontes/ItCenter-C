//Exercício para utilizar biblioteca time.h
//Fila de banco e prioridade:

//Diretivas de pré-processamento:
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

//Função principal:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    //Inicialização da biblioteca time:
    time_t tempoSistema;
    time(&tempoSistema);
    struct tm *atualidadeSistema;
    atualidadeSistema = localtime(&tempoSistema);
    //Inicializando biblioteca Random:
    srand(time(NULL));
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");

    //Declaração de variáveis e resultados:
    int senhaRandom = rand() % 101; //Sortear numeros entre 0 - 100
    int anoAtual = atualidadeSistema->tm_year + 1900;
    int anoNascimento, idadeAtual;

    //Entrada e saída de dados formatados:
    printf("Em que ano você nasceu? ");
    scanf("%d", &anoNascimento);
    idadeAtual = anoAtual - anoNascimento;
    printf("\n» Você tem atualmente %d anos de acordo com seu registro.", idadeAtual);
    if(idadeAtual >= 70) {
        printf("\n\t\t***** ATENÇÃO PRIORIDADE *****");
        printf("\n» Seja Bem Vindo ao Banco!!");
        printf("\n%s» ", ctime(&tempoSistema));
        printf("» Senha de Atendimento: %d", senhaRandom);
    } else {
        printf("\n» Seja Bem Vindo ao Banco!!");
        printf("\n%s ", ctime(&tempoSistema));
        printf("» Senha de Atendimento: %d", senhaRandom);
    }
    
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}