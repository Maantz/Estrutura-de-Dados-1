#include <stdio.h>

int main(){

    char nome[10] = "0123456789";
    nome[0] = 'B';
    nome[1] = 'r';
    nome[2] = 'a';
    nome[3] = 's';
    nome[4] = 'i';
    nome[5] = 'l';
    int i,tamanho = 6;

    printf ("Usando %%c: ");
    for (i=0; i < tamanho; i++){
        printf("%c",nome[i]);
    }
    printf ("\nUsando %%s: ");
    printf ("%.6s\n", nome);

    return 0;
}