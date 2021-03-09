//
//
//  Created by Armando on 08/03/21.
//
/*
 Escribir un programa que pregunte al usuario por su edad y después le diga si es o no mayor de edad.
 */

#include <stdio.h>

int main(){
    // Variables que necesitamos
    int edad;
    
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    
    if(edad>=18)
        printf("Eres mayor de edad\n");
    else
        printf("Eres menor de edad\n");
    
    return 0;
}
