#include <stdio.h>

int verifica (int numero){

if (numero > 0){
    printf ("\n Valor eh Positivo.");
}
 else
 if (numero < 0){
    printf ("\n Valor eh Negativo.");
 }
  else
  if (numero == 0){
    printf("\n Numero Neutro");
  }
}
    int main (void){

    int numero;

        printf ("\n Entre com o valor: \n");
        scanf ("%i",&numero);

        printf ("\n %i", verifica(numero));

        system ("pause");

}
