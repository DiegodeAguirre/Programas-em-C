#include <stdio.h>

int potencia (int x, int z){
    int ret;
    int i;

    ret = 1;

    for (i = 1; i <= z; i ++){
        ret = ret * x;
    }
    return ret;
}

int main (void){
    int x;
    int z;
    int resposta;

    printf ("\n Digite a Base: ");
    scanf ("%i", &x);

    printf ("\n Digite o Expoente: ");
    scanf ("%i", &z);

    resposta = potencia(x,z);

    printf ("\n A potencia da base %i e Expoente %i eh: %i \n", x,z,resposta);
    printf ("\n");

    system ("pause");

}
