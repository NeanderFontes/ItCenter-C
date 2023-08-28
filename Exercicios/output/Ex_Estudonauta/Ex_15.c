//Exercício para condionais simples if:
//Se média do aluno maior ou igual a 7 recebe parebéns
//se não imprime somente a media.

//Diretivas de pré-processamento:
#include <stdio.h>
#include <locale.h>

//Função principal:
int main() {
    //Bibliteca ortográfica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados:
    float nota1, nota2, media;

    //Entrada e saída de dados formatados:
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if(media >= 7) {
        printf("\nPARABÉNS !! sua média = %.1f", media);
    } else {
        printf("\nSua média final = %.1f", media);
    }

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}