#include<stdio.h>
#include<math.h>
    float raio_esfera(float raio){

        return ((4 / 3) * 3.1415 * (pow(raio,3)));
    }

    int main (void){
        float r;
        printf("Entre com o raio da esfera:");
        scanf("%f", &r);

        printf("\n O valome da esfera é: %.2f \n",raio_esfera(r));

        system("pause");

        return 0;
    }
