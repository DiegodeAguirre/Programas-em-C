#include <stdio.h>

float somatorian(int n) {
    float soma;
    int i;

    soma = 0;

    for (i = 1; i <= n; i++){
        soma = soma + (1.0/i);
    }
    return soma;
}

int main (void){
    int n;

    printf ("Entre com um numero:");
    scanf ("%i",&n);

    printf ("O valor de S eh: %.2f \n ", somatorian(n));
    return 0;
}
