//Situa��o com "?" Operador tern�rio.

//Bibliotecas espec�ficas:
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Fun��o main:
int main() {
    //Inicializa��o da biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    //Exemplo Condi��o = falso;
    int numero1 = 0, numero2 = 10;
    int opTernario1 = (numero1 == numero2) ? (numero1) : (numero2);
    printf("A Condi��o: (%d == %d) � 'false' e retorna o 2� valor: (%d) ", numero1, numero2, opTernario1);
    //Exemplo Condi��o = verdadeiro;
    int numeroA = 10, numeroB = 0;
    int opTernario2 = (numeroA == numeroB) ? (numeroA) : (numeroB);
    printf("\nA Condi��o: (%d != %d) � 'Verdadeira' e retorna o 1� valor: (%d) ", numeroB, numeroA, opTernario2);

    float mediaAluno = 7.5;
    char situacaoAluno[10];
    strcpy(situacaoAluno, (mediaAluno >= 7) ? "Aprovado" : "Reprovado");
    printf("\n\nSitua��o com String: \nO Aluno est� %s", situacaoAluno);

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}