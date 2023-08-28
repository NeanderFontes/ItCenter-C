//Utilizando diretiva de pr�-processamento para capturar hora e data do sistema

//Bibliotecas em geral:
#include <stdio.h>
#include <locale.h>
//Biblioteca para hora e data do sistema:
#include <time.h>

//Fun��o main:
int main() {
    //Bibliteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Inicializando a biblioteca time:
    time_t tempoSistema;
    //Inclus�o na vari�vel no &tempoSistema:
    time(&tempoSistema);
    //Ativa��o da estrutura em uma vari�vel criada e apontada na estrutura:
    struct tm *dataLocal;
    //Com a Vari�vel apontada na estrutura recebe o localtime da inicializa��o da biblioteca:
    dataLocal = localtime(&tempoSistema);

    //Declara��o de vari�veis e resultados:
    int diaAtual = dataLocal->tm_mday;
    int mesAtual = dataLocal->tm_mon + 1;
    int anoAtual = dataLocal->tm_year + 1900;

    //Entrada e sa�da de dados formatados:
    printf("O Dia de hoje atrav�s do seu Sistema Operacional = %d", diaAtual);
    printf("\nO M�s de hoje atrav�s do seu Sistema Operacional = %d", mesAtual);
    printf("\nO Ano de hoje atrav�s do seu Sistema Operacional = %d", anoAtual);
    printf("\nEstamos atualmente em %d/%d/%d", diaAtual, mesAtual, anoAtual);
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}