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
    char *nomeSemana[] = {"Domingo", "Segunda-Feira", "Ter�a-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sabado"};
    char *nomesMeses[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    int diaSemana = dataLocal->tm_wday;

    //Entrada e sa�da de dados formatados:
    printf("\n� Dia da semana = %s", nomeSemana[diaSemana]);
    printf("\n� M�s atual nomeado = %s", nomesMeses[mesAtual - 1]);
    printf("\n\n� O Data atual atrav�s do seu Sistema Operacional = %02d", diaAtual);
    printf("\n� O M�s atual em N� atrav�s do seu Sistema Operacional = %02d", mesAtual);
    printf("\n� O Ano atual atrav�s do seu Sistema Operacional = %d", anoAtual);
    printf("\n� Estamos atualmente em %02d/%02d/%d", diaAtual, mesAtual, anoAtual);
    // Exibe o tempo atual em formato de texto
    printf("\n� Tempo atual: %s", ctime(&tempoSistema));
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}