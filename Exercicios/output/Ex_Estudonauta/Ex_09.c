//Media de aluno:

//Bibliotecas especificas:
#include <stdio.h>
#include <locale.h>

//Funcao main:
int main() {
    //Inicializacao da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declara��o de vari�veis e resultados:
    printf("\n=================== COME�O DO PROGRAMA EM C ===================\n");
    char *nomeAluno;
    float nota1, nota2, media;

    //Entrada e saida de dados formatados:
    printf("Nome do aluno: ");
    gets(nomeAluno);
    printf("\nNota 1: ");
    scanf(" %f", &nota1);
    printf("Nota 2: ");
    scanf(" %f", &nota2);

    printf("O alunota %s com notas: %.1f + %.1f M�dia = %.1f", nomeAluno, nota1, nota2, (media = (nota1+nota2)/2));
    //Atribui��o e sa�da de valores das vari�veis:
    printf("\n================================================================\n");
    return 0;
}