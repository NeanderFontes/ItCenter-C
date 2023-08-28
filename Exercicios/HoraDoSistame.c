//Utilizando diretiva de pré-processamento para capturar hora e data do sistema

//Bibliotecas em geral:
#include <stdio.h>
#include <locale.h>
//Biblioteca para hora e data do sistema:
#include <time.h>

//Função main:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Inicializando a biblioteca time:
    time_t tempoSistema;
    //Inclusão na variável no &tempoSistema:
    time(&tempoSistema);
    //Ativação da estrutura em uma variável criada e apontada na estrutura:
    struct tm *dataLocal;
    //Com a Variável apontada na estrutura recebe o localtime da inicialização da biblioteca:
    dataLocal = localtime(&tempoSistema);

    //Declaração de variáveis e resultados:
    int diaAtual = dataLocal->tm_mday;
    int mesAtual = dataLocal->tm_mon + 1;
    int anoAtual = dataLocal->tm_year + 1900;

    //Entrada e saída de dados formatados:
    printf("O Dia de hoje através do seu Sistema Operacional = %d", diaAtual);
    printf("\nO Mês de hoje através do seu Sistema Operacional = %d", mesAtual);
    printf("\nO Ano de hoje através do seu Sistema Operacional = %d", anoAtual);
    printf("\nEstamos atualmente em %d/%d/%d", diaAtual, mesAtual, anoAtual);
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}