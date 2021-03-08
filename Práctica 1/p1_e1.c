//
//  p1_e1.c
//  
//
//  Created by Armando on 08/03/21.
//

#include <stdio.h>

int main(){
    // Necesitamos tres variables
    float a; // altura
    float b; // base
    float c; // area
    
    // Preguntamos la altura
    printf("Ingrese la altura: ");
    scanf("%f", &a);
    printf("Ingrese la base: ");
    scanf("%f", &b);
    // Area = base * altura
    c = b*a;
    printf("El area es: %.2f", c);
    return 0;
}
