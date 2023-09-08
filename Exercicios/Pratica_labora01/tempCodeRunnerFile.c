//Objetivo: Resolver um problema criando um programa na linguagem C
//Utilizando: Vetores, funções e procedimentos.

//Diretivas de pré-processamento:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constante para array definido máximo:
#define MAX 10

//Validação para numOcorrencias de acordo com a constante:
int validarOcorrencias() {
    int numOcorrencias;
    do {
        printf("\nIntroduza o numero de ocorrencias entre (1 - %d): ", MAX);
        scanf("%d", &numOcorrencias);
        if(numOcorrencias < 1 || numOcorrencias > MAX) {
            printf("\nValor invalido.");
        }
    } while(numOcorrencias < 1 || numOcorrencias > MAX);
    return numOcorrencias;
}

//Função para preenchimento de numero de dias registrado:
int diasNumOcorrencias() {
    int numDias;
    if(numDias > MAX) {
        printf("Numero de dias maior que permitido.");
    } else {
        printf("Introduza o numero de dias que deseja registrar ocorrencias: ");
        scanf("%d", &numDias);
    }
    return numDias;
}

//Função para preenchimento do numero de dias que pretende registrar ocorrencias:
void preencherOcorrencia(int ocorrencias[], int diaOcorrencia) {
    int numOcorrencias;
    if(numOcorrencias >= diaOcorrencia) {
        printf("O Numero de ocorrencias maior que permitido.");
        return;
    } else {
        for(numOcorrencias = 0; numOcorrencias < diaOcorrencia; numOcorrencias++) {
            printf("Introduza o numero de ocorrencias do dia %d: ", (numOcorrencias + 1));
            scanf("%d", &ocorrencias[numOcorrencias]);
        }
    }
}

//Função para preencher o max de numeros de ocorrencias:
void maxOcorrencia(int ocorrencias[], int diaOcorrencia) {
    int maxNumOcorrencia = ocorrencias[0];
    int diaMax = 1, numOcorrencias;
    for(numOcorrencias = 1; numOcorrencias < diaOcorrencia; numOcorrencias++) {
        if(ocorrencias[numOcorrencias] > maxNumOcorrencia) {
            maxNumOcorrencia = ocorrencias[numOcorrencias];
            diaMax = (numOcorrencias + 1);
        }
    }
    printf("\nO Valor maximo de ocorrencia foi de: %d no dia: %d", maxNumOcorrencia, diaMax);
}

//Função para preencher o min de numero de ocorrencias:
void minOcorrencia(int ocorrencias[], int diaOcorrencia) {
    int minNumOcorrencia = ocorrencias[0];
    int diaMin = 1, numOcorrencias;
    for(numOcorrencias = 1; numOcorrencias < diaOcorrencia; numOcorrencias++) {
        if(ocorrencias[numOcorrencias] < minNumOcorrencia) {
            minNumOcorrencia = ocorrencias[numOcorrencias];
            diaMin = (numOcorrencias + 1);
        }
    }
    printf("\nO Valor minimo de ocorrencia foi de: %d no dia: %d", minNumOcorrencia, diaMin);
}

//Função para calcular a média da ocorrencia:
float mediaOcorrencia(int ocorrencias[], int diaOcorrencia) {
    int ocorrenciaSoma = 0, numOcorrencias;
    for(numOcorrencias = 0; numOcorrencias < diaOcorrencia; numOcorrencias++) {
        ocorrenciaSoma += ocorrencias[numOcorrencias];
    }
    return (float)ocorrenciaSoma / diaOcorrencia;
}


//Função principal:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMECO DO PROGRAMA EM C ====================\n");
    
    //Declaração de variáveis e resultados:
    int ocorrencias[MAX];
    int opcaoMenu, numOcorrencias = 0, diaOcorrencia = 0;

    //Entrada e saída de dados formatados:
    do {
        //Menu Inicial:
        printf("\n1 - Definir o numero de ocorrencias.");
        printf("\n6 - Sair");
        printf("\nEscolha uma opcao desejada: ");
        scanf("%d", &opcaoMenu);

        switch(opcaoMenu) {
            case 1: //Definir numero de ocorrencias
                diaOcorrencia = 0;
                numOcorrencias = validarOcorrencias();
                break;
            case 6: //sair
                printf("\n>> Sair do programa.");
                break;
                exit(0);
            default:
                printf("\n***** Opcao invalida *****\n");
        }

        while (numOcorrencias > 0) {
            //Menu secundario após ler corretamente numero de ocorrencias:
            printf("\n1 - Definir o numero de ocorrencias.");
            printf("\n2 - Preencher ocorrencias.");
            printf("\n6 - Sair");
            printf("\nEscolha uma opcao desejada: ");
            scanf("%d", &opcaoMenu);

            if(opcaoMenu == 6) {
                printf("\n>> Sair do programa.");
                exit(0);
            } else {
                switch(opcaoMenu) {
                    case 1: //Definir numero de ocorrencias
                        numOcorrencias = validarOcorrencias();
                        break;
                    case 2: //Preencher ocorrencias
                        if(numOcorrencias <= 0 || numOcorrencias > MAX) {
                            printf("\nDefina o numero de ocorrencias correto.");
                        } else {
                            preencherOcorrencia(ocorrencias, numOcorrencias);
                        }
                        break;
                    case 6: //sair
                        printf("\n>> Sair do programa.");
                        exit(0);
                    default:
                        printf("\n***** Opcao invalida *****\n");
                }
            }            
        }

        while (diaOcorrencia > 0) {
            //Menu Após preencher numero de ocorrencias:
            printf("\n1 - Definir o numero de ocorrencias.");
            printf("\n2 - Preencher ocorrencias.");
            printf("\n3 - Media das ocorrencias.");
            printf("\n4 - Maximo de ocorrencias e dia respectivo.");
            printf("\n5 - Minimo de ocorrencias e dia respectivo.");
            printf("\n6 - Sair");
            printf("\nEscolha uma opcao desejada: ");
            scanf("%d", &opcaoMenu);

            if(opcaoMenu == 6) {
                printf("\n>> Sair do programa.");
                exit(0);
            } else {
                switch(opcaoMenu) {
                    case 1: //Definir numero de ocorrencias
                        numOcorrencias = validarOcorrencias();
                        break;
                    case 2: //Preencher ocorrencias
                        if(numOcorrencias <= 0 || numOcorrencias > MAX) {
                            printf("\nDefina o numero de ocorrencias correto.");
                        } else {
                            preencherOcorrencia(ocorrencias, numOcorrencias);
                        }
                        break;
                    case 3: //Calcular Média:
                        if(diaOcorrencia <= 0) {
                            printf("\nNao ha ocorrencias para calcular a media.");
                        } else {
                            float numMediaOcorrencia = mediaOcorrencia(ocorrencias, diaOcorrencia);
                            printf("\nA media das ocorrencias = %.2f", numMediaOcorrencia);
                        }
                        break;
                    case 4: //Maximo de ocorrencias e dia respectivo.
                        if(diaOcorrencia <= 0) {
                            printf("\nNao ha ocorrencias para calcular a maximo.");
                        } else {
                            maxOcorrencia(ocorrencias, diaOcorrencia);
                        }
                        break;
                    case 5: //Minimo de ocorrencias e dia respectivo.
                        if(diaOcorrencia <= 0) {
                            printf("\nNao ha ocorrencias para calcular a minimo.");
                        } else {
                            minOcorrencia(ocorrencias, diaOcorrencia);
                        }
                        break;
                    case 6: //sair
                        printf("\n>> Sair do programa.");
                        exit(0);
                    default:
                        printf("\n***** Opcao invalida *****\n");
                }
            }            
        }

    } while(opcaoMenu != 6); 
    
    //Final do Programa.
    printf("\n=========================== FIM ================================\n");
    return 0;
}