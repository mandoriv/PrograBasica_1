//
//
//  Created by Armando on 09/03/21.
//
/*
 Desarrollar un programa que calcule el máximo de cinco números reales entrados por teclado y lo muestre por pantalla.
 */

#include <stdio.h>

int main(){
    // Variables que necesitamos
    
    float x, max;
    
    printf("Ingresa número 1: ");
    scanf("%f", &max);
    printf("Ingresa número 2: ");
    scanf("%f", &x);
    if(x>max)
        max = x;
    printf("Ingresa número 3: ");
    scanf("%f", &x);
    if(x>max)
        max = x;
    printf("Ingresa número 4: ");
    scanf("%f", &x);
    if(x>max)
        max = x;
    printf("Ingresa número 5: ");
    scanf("%f", &x);
    if(x>max)
        max = x;
    
    printf("El número máximo ingresado es: %f", max);
    
    return 0;
}
