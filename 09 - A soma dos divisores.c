#include <stdio.h>

float divisores (int numero){
    int i;
    float resposta,d;

    for (i = 1 ;i <= numero; i++){
        if (numero % i == 0){
            d = (numero / i);
            resposta = resposta + d;
        }
    }
    return resposta;
}

int main (void){
    int n;
    float resultado;

    printf ("\n Digite o Numero: ");
    scanf ("%i", &n);

    resultado = divisores(n);

    printf ("\n A soma dos divisores eh: %.2f \n", resultado);

    system ("pause");

}
