#include <stdio.h>

void soma (float *prt){
    int i;
    float numero;


    for (i = 1; i <= 20; i++){
        scanf ("%f", &numero);
        *prt = *prt + numero;
    }
}

int main (void){
    float numero = 0;

    printf ("\n Informe 20 Numeros: \n");
    soma(&numero);

    printf ("A Soma dos Elementos eh: %2.f", numero);

    return 0;
}
