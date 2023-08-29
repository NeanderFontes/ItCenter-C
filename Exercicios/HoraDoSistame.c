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
    char *nomeSemana[] = {"Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sabado"};
    char *nomesMeses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    int diaSemana = dataLocal->tm_wday;

    //Entrada e saída de dados formatados:
    printf("\n» Dia da semana = %s", nomeSemana[diaSemana]);
    printf("\n» Mês atual nomeado = %s", nomesMeses[mesAtual - 1]);
    printf("\n\n» O Data atual através do seu Sistema Operacional = %02d", diaAtual);
    printf("\n» O Mês atual em Nº através do seu Sistema Operacional = %02d", mesAtual);
    printf("\n» O Ano atual através do seu Sistema Operacional = %d", anoAtual);
    printf("\n» Estamos atualmente em %02d/%02d/%d", diaAtual, mesAtual, anoAtual);
    // Exibe o tempo atual em formato de texto
    printf("\n» Tempo atual: %s", ctime(&tempoSistema));
    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}