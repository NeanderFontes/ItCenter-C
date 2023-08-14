//Inclusão de biblioteca
#include <stdio.h>

//Funcação main:
int main() {
    //Atrubuição de valores:
    int idade = 33;
    float peso = 100.5;
    char sexo = 'M';
    char *nome = "Neander";

    //Formatação em saída de informações:
    printf("%s tem %i, sexo: %c e esta pesando %.2f kg.", nome, idade, sexo, peso);
    return 0;
}