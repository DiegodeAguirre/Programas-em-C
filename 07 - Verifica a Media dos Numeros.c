#include <stdio.h>

float exercicio7 (void){
    int numero,vezes = 0;
    float media = 0;

    printf ("\n Informe um Numero:");
    scanf ("%i", &numero);

    while (numero != 0){
      media = media + numero;
      vezes++;

      printf ("\n Informe outro numero. Digite 0 para finalizar: ");
      scanf ("%i", &numero);
      media = media / vezes;
      return media;
    }
}

int main (void){
    printf ("\n A media dos numeros informado eh %.2f \n", exercicio7());

    return 0;
}
