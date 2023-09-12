// Criar um programa de Jogo do Galo ou Jogo da Velha(Brasil).
// Objetivos: Resolver os problemas utilizando Vetores, funções e procedimentos.
// 1) Criar procedimento para ler o nome dos jogadores
// 2) Inicializar o vetor bidimensional
// 3) Criar procedimeno para imprimir o tabuleiro
// 4) Criar procedimento para o jogo:
//     a. Indicar o jogador que está ganhando.
//     b. Iserir coordenadas válidas para preencher tabuleiro e mostrar o mesmo.

//Diretivas de pré-processamento:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Constante para array definido máximo:
#define LINHA 3
#define COLUNA 3

//Variáveis Global para tabuleiro:
char tabuleiro[LINHA][COLUNA];
int numLinha, numColuna;


//Procedimento para ler o nome dos jogadores:
void nomeJogadores(char* jogador1, char* jogador2) {
    printf("Introduza nome do Jogardor X: ");
    gets(jogador1);
    printf("Introduza nome do Jogardor 0: ");
    gets(jogador2);

    printf("Jogador X = %s \nJogador 0 = %s", jogador1, jogador2);
}

//Procedimento para inicializar o tabuleiro:
void iniciarTabuleiro() {
    for(numLinha = 0; numLinha < LINHA; numLinha++) {
        for(numColuna = 0; numColuna < COLUNA; numColuna++) {
            tabuleiro[numLinha][numColuna] = ' ';
        }
    }
}

//Procedimento para imprimir o tabuleiro:
void imprimirTabuleiro() {
    printf("\t\t\t   0   1   2\n");
    for (numLinha = 0; numLinha < 3; numLinha++) {
        printf("\t\t\t%d  ", numLinha);
        for (numColuna = 0; numColuna < 3; numColuna++) {
            printf("%c", tabuleiro[numLinha][numColuna]);
            if (numColuna < 2) {
                printf(" | ");
            }
        }
        printf("\n");
        if (numLinha < 2) {
            printf("\t\t\t  ---|---|---\n");
        }
    }
}

//Função para validar as coordenadas dos jogadores:
int validarCoordenadas(int numLinha, int numColuna) {
    if(numLinha >= 0 && numLinha < LINHA && numColuna >= 0 && numColuna < COLUNA && tabuleiro[numLinha][numColuna] == ' ') {
        return 1;
    } else {
        return 0;
    }
} 

//Procedimento para inserir coordenadas dos jogadores:
void inserirJogadas(char jogada) {
    printf("\nInsira a jogada de acordo com as Coordenadas:");
    printf("\nLinha: ");
    scanf("%d", &numLinha);
    printf("Coluna: ");
    scanf("%d", &numColuna);
    while(!validarCoordenadas(numLinha, numColuna)) {
        printf("\nCoordenadas invalidas ou posicao ja ocupada. Digite Novamente:\n");
        printf("Linha: ");
        scanf("%d", &numLinha);
        printf("Coluna: ");
        scanf("%d", &numColuna);
    }
    tabuleiro[numLinha][numColuna] = jogada;
}

//Funcao para retornar quantidade de posições vazias:
int posVazia() {
    int contador = 0;

    for(numLinha = 0; numLinha < LINHA; numLinha++) {
        for(numColuna = 0; numColuna < COLUNA; numColuna++) {
            if (tabuleiro[numLinha][numColuna] == ' '){
                contador++;
            }
        }
    }
    return contador;
}

//Função para verificar vitorias e derrotas:

//Função main:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMECO DO PROGRAMA EM C ====================\n");
    
    //Declaração de variáveis e resultados:
    //char tabuleiro[LINHA][COLUNA];
    char jogador1[30], jogador2[30];
    char jogadorX = 'X', jogador0 = '0';
    int jogador = 1;

    //Entrada e saída de dados formatados:
    printf("\n\t\t\tTabuleiro Jogo do Galo\n");
    printf("\t\t\tOu Jogo da Velha(BR)\n\n");

    iniciarTabuleiro();
    imprimirTabuleiro();
    nomeJogadores(jogador1, jogador2);

    do {
        if(jogador == 1) {
            printf("\n%s sua vez de jogar:", jogador1);
            inserirJogadas(jogadorX);
            jogador++;
        } else {
            printf("\n%s sua vez de jogar:", jogador2);
            inserirJogadas(jogador0);
            jogador = 1;
        }

        imprimirTabuleiro();
    } while(posVazia() > 0);
    
    //Final do Programa.
    printf("\n=========================== FIM ================================\n");
    return 0;
}