//Media aluno com operador ternario:

//Bibliotecas espec�ficas:
#include <stdio.h>
#include <locale.h>

//Funca��o main:
int main() {
    //Inicializando biblioteca ortogr�fica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    
    //Declara��o de vari�veis e resultados:
    float nota1, nota2, mediaAluno;
    char situacaoAluno[10];

    //Entrada e sa�da de dados formatados:
    printf("Insira 1� Nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Insira a 2� Nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    mediaAluno = ((nota1+nota2)/2);
    //Operador tern�rio:
    printf("O Aluno obteve m�dia = %.1f e est�: %s", mediaAluno, (mediaAluno >= 7) ? "Aprovado" : "Reprovado");

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}