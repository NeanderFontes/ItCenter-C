// Escreve um programa que leia um carácter e que devolva um carácter
// cujo código numérico é 3 unidades acima do código do carácter introduzido.

//Biblioteca especificas:
#include <stdio.h>
#include <locale.h>

//Função main:
int main() {
    //Inicialização da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    //Declaração de variáveis e resultados:
    // char caractere1 = 'A'; caractere2 = 'a';
    char caractere1;

    //Entrada e saída de dados formatados:
    printf("Introduza um caractere qualquer: ");
    caractere1 = getchar();
    printf("O Caractere '%c' tem valor na tabela ASCII + 3 unidade = (%c)", caractere1, (caractere1 + 3));
    // printf("O Caractere '%c' tem valor na tabela ASCII = (%d)", caractere2, caractere2);

    printf("\n================================================================\n");
    return 0;
}