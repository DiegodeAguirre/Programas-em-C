#include <stdio.h>

int fatorial (int numero){
    int resultado;
    int i;

    resultado = 1;

    for (i=1; i <= numero; i++){
        resultado = resultado * i;
    }
    return resultado;
}

int main (void){
    int resposta;
    int numero;

    printf ("\n Digite o Numero:");
    scanf ("%i", &numero);

    resposta = fatorial(numero);

    printf ("\n o fatorial eh: %i \n",resposta);

    system ("pause");
}
