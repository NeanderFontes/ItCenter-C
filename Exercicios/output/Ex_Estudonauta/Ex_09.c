//Media de aluno:

//Bibliotecas especificas:
#include <stdio.h>
#include <locale.h>

//Funcao main:
int main() {
    //Inicializacao da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis e resultados:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    char nomeAluno;
    float nota1, nota2, media;

    //Entrada e saida de dados formatados:
    printf("Nome do aluno: ");
    gets(nomeAluno);
    printf("\nNota 1: ");
    scanf(" %f", &nota1);
    printf("Nota 2: ");
    scanf(" %f", &nota2);

    printf("O alunota %s com notas: %.1f + %.1f Média = %.1f", nomeAluno, nota1, nota2, (media = (nota1+nota2)/2));
    //Atribuição e saída de valores das variáveis:
    printf("\n================================================================\n");
    return 0;
}