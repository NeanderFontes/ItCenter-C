//Exerc�cio para utilizar biblioteca time.h
//Fila de banco e prioridade:

//Diretivas de pr�-processamento:
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

//Fun��o principal:
int main() {
    //Inicializa��o da biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    //Inicializa��o da biblioteca time:
    time_t tempoSistema;
    time(&tempoSistema);
    struct tm *atualidadeSistema;
    atualidadeSistema = localtime(&tempoSistema);
    //Inicializando biblioteca Random:
    srand(time(NULL));
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");

    //Declara��o de vari�veis e resultados:
    int senhaRandom = rand() % 101; //Sortear numeros entre 0 - 100
    int anoAtual = atualidadeSistema->tm_year + 1900;
    int anoNascimento, idadeAtual;

    //Entrada e sa�da de dados formatados:
    printf("Em que ano voc� nasceu? ");
    scanf("%d", &anoNascimento);
    idadeAtual = anoAtual - anoNascimento;
    printf("\n� Voc� tem atualmente %d anos de acordo com seu registro.", idadeAtual);
    if(idadeAtual >= 70) {
        printf("\n\t\t***** ATEN��O PRIORIDADE *****");
        printf("\n� Seja Bem Vindo ao Banco!!");
        printf("\n%s� ", ctime(&tempoSistema));
        printf("� Senha de Atendimento: %d", senhaRandom);
    } else {
        printf("\n� Seja Bem Vindo ao Banco!!");
        printf("\n%s ", ctime(&tempoSistema));
        printf("� Senha de Atendimento: %d", senhaRandom);
    }
    
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}