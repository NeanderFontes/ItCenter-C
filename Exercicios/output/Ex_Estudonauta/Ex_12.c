//Media aluno com operador ternario:

//Bibliotecas específicas:
#include <stdio.h>
#include <locale.h>

//Funcação main:
int main() {
    //Inicializando biblioteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    float nota1, nota2, mediaAluno;
    char situacaoAluno[10];

    //Entrada e saída de dados formatados:
    printf("Insira 1ª Nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Insira a 2ª Nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    mediaAluno = ((nota1+nota2)/2);
    //Operador ternário:
    printf("O Aluno obteve média = %.1f e está: %s", mediaAluno, (mediaAluno >= 7) ? "Aprovado" : "Reprovado");

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}