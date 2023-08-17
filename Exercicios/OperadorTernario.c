//Situação com "?" Operador ternário.

//Bibliotecas específicas:
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    //Exemplo Condição = falso;
    int numero1 = 0, numero2 = 10;
    int opTernario1 = (numero1 == numero2) ? (numero1) : (numero2);
    printf("A Condição: (%d == %d) é 'false' e retorna o 2º valor: (%d) ", numero1, numero2, opTernario1);
    //Exemplo Condição = verdadeiro;
    int numeroA = 10, numeroB = 0;
    int opTernario2 = (numeroA == numeroB) ? (numeroA) : (numeroB);
    printf("\nA Condição: (%d != %d) é 'Verdadeira' e retorna o 1º valor: (%d) ", numeroB, numeroA, opTernario2);

    float mediaAluno = 7.5;
    char situacaoAluno[10];
    strcpy(situacaoAluno, (mediaAluno >= 7) ? "Aprovado" : "Reprovado");
    printf("\n\nSituação com String: \nO Aluno está %s", situacaoAluno);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}