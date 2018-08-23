#include <stdio.h>

float dados (float altura, char sexo){
    float pesoideal;

    if (sexo == 'M'){
        pesoideal = (72.7 * altura) - 58;
    }
        else
        if (sexo == 'F'){
            pesoideal = (62.1 * altura) - 44.7;
        }
         else
          printf ("\n Sexo invalido! \n ");

    return pesoideal;
}

int main (void){

    float a;
    char sexo;
    float resposta;

    printf ("\n Entre com sua altura:");
    scanf ("%f", &a);

    printf ("\n Entre com seu Sexo -  M = Masculino e F = Feminino:\n ");
    fflush(stdin);
    scanf("%s", &sexo);

    resposta = dados(a,sexo);
    printf ("\n Seu peso Ideal eh: %.2f \n", resposta);
    printf ("\n");

system ("\n pause");
}
