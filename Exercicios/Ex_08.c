    //  Cria um programa que leia um n�mero inteiro e determine se este � 
    // par e positivo. 

//Bibliotecas espec�ficas:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Func��o main:
int main() {
    //Inicializando biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    int numEntrada;
    char analisarNum[10];
    
    //Entrada e sa�da de dados formatados:
    printf("Insira um valor inteiro: ");
    scanf("%d", &numEntrada);
    //Resolu��o com estrutura de controle if:
    if (numEntrada % 2 == 0 && numEntrada > 0) {
        printf("\nN�mero inserido � Par e Positivo.");
    } else if (numEntrada % 2 == 0 && numEntrada < 0) {
        printf("\nN�mero inserido � Par e Negativo.");
    } else if (numEntrada % 2 != 0 && numEntrada > 0) {
        printf("\nN�mero inserido � �mpar e Positivo.");
    } else if (numEntrada % 2 != 0 && numEntrada < 0) {
        printf("\nN�mero inserido � �mpar e Negativo.");
    } else {
        printf("\nN�mero inserido � 0.");
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}