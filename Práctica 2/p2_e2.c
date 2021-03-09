//
//
//  Created by Armando on 08/03/21.
//
/*
 Implementar un programa para el cálculo del cociente y el resto de la división de dos números enteros que se pedirán al usuario.
 */

#include <stdio.h>

int main(){
    // Variables que necesitamos
    int dividendo, divisor, cociente, resto;
    // Pedimos los datos
    printf("Ingresa el dividendo: ");
    scanf("%d", &dividendo);
    printf("Ingresa el divisor: ");
    scanf("%d", &divisor);
    // Calculamos el resto y el cociente
    resto = dividendo%divisor;
    cociente = dividendo/divisor;
    // Mostramos los resultados
    printf("Cociente: %d\n", cociente);
    printf("Resto: %d\n", resto);
    
    return 0;
}
