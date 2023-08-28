// Cria um programa que determine se um número real lido através do 
// teclado se encontra no intervalo [1.0,1.9].

//Bibliotecas necessárias:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    float numEntrada;

    //Entrada e saída de dados formatados:
    printf("Introduza um número decimal: ");
    scanf("%f", &numEntrada);
    if(numEntrada >= 1.0 && numEntrada <= 1.9) {
        printf("O Número (%.1f) encontra-se no intervalo");
    } else {
        printf("O Número (%.1f) não encontra-se no intervalo");
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}