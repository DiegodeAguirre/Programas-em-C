#include <stdio.h>

int diferenca (char caracter1[10],char caracter2[10]){
    int i;

    if (strcmp (caracter1,caracter2)==0){
       return 0;
    }
    else {
        for (i=0;i < 20; i++){
            if (caracter1[i]!=caracter2[i]){
                return i+1;
            }
        }
    }
}

int main (void){
    char c1[10];
    char c2[10];
    int resp;

    printf ("\n Informe a Primeira Palavra: ");
    fflush(stdin);
    gets (c1);
    printf ("\n Informe a Segunda Palavra: ");
    fflush(stdin);
    gets (c2);

    resp = diferenca(c1,c2);

    if (resp == 0) {
        printf ("\n Palavras sao iguais!");
    }
     else {
        printf ("\n Nomes sao Diferentes!");
     }
}
