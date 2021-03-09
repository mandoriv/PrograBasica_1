//
//
//  Created by Armando on 08/03/21.
//
/*
 Desarrollar un programa que calcule el mínimo de dos números reales entrados por teclado y lo muestre por pantalla.
 */

#include <stdio.h>

int main(){
    // Variables que necesitamos
    float numA;
    float numB;
    
    printf("Primer número real: ");
    scanf("%f", &numA);
    printf("Segundo número real: ");
    scanf("%f", &numB);
    
    if(numA == numB)
        printf("Son iguales\n");
    else if(numA>numB)
        printf("El primer número %f es mayor que el segundo %f\n", numA, numB);
    else
        printf("El segundo número %f es mayor que el primero %f\n", numB, numA);
    
    return 0;
}
