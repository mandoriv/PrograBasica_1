//
//
//  Created by Armando on 09/03/21.
//
/*
 Codificar un programa para el cálculo del producto de cinco números reales. Hacerlo primero sin restricciones y después utilizando sólo dos variables.
 */

#include <stdio.h>

int main(){
    // Variables que necesitamos
    
    float num1, num2, num3, num4, num5;
    
    printf("Ingrese el número 1: ");
    scanf("%f", &num1);
    printf("Ingrese el número 2: ");
    scanf("%f", &num2);
    printf("Ingrese el número 3: ");
    scanf("%f", &num3);
    printf("Ingrese el número 4: ");
    scanf("%f", &num4);
    printf("Ingrese el número 5: ");
    scanf("%f", &num5);
    
    printf("Producto sin restricciones: %f\n", num1*num2*num3*num4*num5);
    printf("Producto con restricciones: %.2f\n", num1*num2*num3*num4*num5);
    
    return 0;
}
