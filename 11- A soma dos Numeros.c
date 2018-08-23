#include <stdio.h>
#include <math.h>

    float numero_positivo(int numero){
        int i;
        float soma = 0;
        float resposta = 0;

        for(i = 1; i <= numero ; i++){
            resposta = (((pow(i,2.0)) + 1.0) / (numero + 3.0));
            soma = soma + resposta;
        }

        return soma;
    }

    int main (void){

        int numero1;
        float ret;

        printf("Entre com um numero:");
        scanf("%i", &numero1);

        ret = numero_positivo(numero1);

        printf("A soma é :%.2f \n",ret);


        return 0;


    }
