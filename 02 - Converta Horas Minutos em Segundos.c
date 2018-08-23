#include <stdio.h>

int converte_segundos (int hora,int minuto,int segundo){
    int resultado;
    resultado = (hora * 60 * 60) + (minuto * 60) + segundo;
    return resultado;
}

int main (void){
    int h,m,s;
    int conversao;

    printf ("\n Informe a Hora:");
    scanf ("%i", &h);
    printf ("\n Informe os Minutos:");
    scanf ("%i", &m);
    printf ("\n Informe os Segundos:");
    scanf ("%i", &s);

    conversao = converte_segundos(h,m,s);
    printf ("Os segundos sao: %i \n", conversao);
}
