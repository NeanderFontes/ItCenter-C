//Uso de biblioteca String em C é importante para definir algumas
//funcionalidades específicas para uso da string.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
//Biblioteca String:
#include <string.h>

//Funcao main:
int main() {
    //Inicialização da biblioteca ortografica:
    setlocale(LC_ALL, "Portuguese");
    
    //Inicio do programa:
    printf("\n=================== COMEÇO DO PROGRAMA EM C ===================\n");
    
    //Declaração de variáveis e resultados;
    //String Copy para atribuições:
    char nome[] = "Neander";
    char sobreNome[] = "Fontes";
    strcpy(nome, "Neander");
    printf("String Copy = Meu nome e: %s e apelido: ", nome, sobreNome);

    //String Length para "tamanho" frase/letra:
    int tamanho = strlen(nome);
    printf("\nString Length = O nome %s tem %d letras.", nome, tamanho);

    //String Comparasion para comparação:
    //Se = 0 (Iguais)
    //Se < 0 (Primeira string Menor)
    //Se > 0 (Primeira string Maior)
    int comparar = strcmp(nome, sobreNome);
    if (comparar == 0) {
        printf("\nString Comparasion = nome e str2 são sobreNome.");
    } else if (comparar < 0) {
        printf("\nString Comparasion = nome e menor que sobreNome.");
    } else {
        printf("\nString Comparasion = nome e maior que sobreNome.");
    }

    //String Concatenate para juntar:
    printf("\nString Concatenate = %s", strcat(nome, sobreNome));

    //String Upper Case para MAISCULA:
    printf("\nString Upper Case = %s", strupr(nome));

    //String Lower Case para minuscula:
    printf("\nString Lower Case = %s", strlwr(nome));

    //Final do Programa.
    printf("\n================================================================\n");
    return 0;
}