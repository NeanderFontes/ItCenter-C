//Exercicio Estudonauta 22
//Hora de Filme
//Exercício para condições compostas

//Diretivas de pré-processamento:
#include <stdio.h>
#include <time.h>
#include <locale.h>

//Função principal:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    //Inicializando biblioteca time:
    time_t localTime;
    time(&localTime);
    struct tm *localSistem;
    localSistem = localtime(&localTime);
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    int horaLocal = localSistem->tm_hour;
    float ingressoCinema;
    printf("+++++++++++++ CINEMA ESTUDONAUTA +++++++++++++");
    printf("\nHORA DO FILME: 19h - PREÇO DO INGRESSO: R$20");
    printf("\n----------------------------------------------");
    printf("\nQuanto em valor você tem? R$ ");
    scanf("%f", &ingressoCinema);
    if(horaLocal > 19 || ingressoCinema < 20) {
        if(horaLocal > 19) {
        printf("» O valor de R$%.2f é suficiente para comprar o ingresso, porém...", ingressoCinema);
        printf("\nDe Acordo com a hora local %dh infelizmente o filme ja começou!", horaLocal);
        }
        if(ingressoCinema < 20) {
        printf("\n» O valor de R$%.2f insuficiente para compra do ingresso", ingressoCinema);
        }
    } else {
        printf("\n» Seja muito bem vindo ao cinema e bom filme!");
    }
    //Final do Programa.
    printf("\n================================================================\n");
    

    return 0;
}