//Inclusão de biblioteca
// 1º) Atribuição de CONSTANTES em diretivas de pré-processamento:
#include <stdio.h>
#define IDADE 34
#define PESO 100.5
#define SEXO 'M'
#define NOME "Neander"

//Funcação main:
int main() {
    // 2º) Atrubuição de CONSTANTES explicitamente:
    // const int IDADE = 34;
    // const float PESO = 100.5;
    // const char SEXO = 'M';
    // const char *NOME = "Neander";

    //Formatação em saída de informações:
    printf("Meu nome é %s, tenho %i anos de idade, sexo(%c) e peso: %.1f kg.", NOME, IDADE, SEXO, PESO);
    return 0;
}