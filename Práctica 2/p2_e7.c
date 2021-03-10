//
//
//  Created by Armando on 09/03/21.
//
/*
 Escribir un programa que pregunte por tres números enteros y diga si todos ellos son pares o no.
 */

#include <stdio.h>

int main(){
    // Variable que necesitamos
    int num1, num2, num3;
    
    printf("Ingresa el número 1: ");
    scanf("%d", &num1);
    printf("Ingresa el número 2: ");
    scanf("%d", &num2);
    printf("Ingresa el número 3: ");
    scanf("%d", &num3);
    
    if((num1%2==0)&&(num2%2==0)&&(num3%2==0))
        printf("Todos son números par\n");
    else
        printf("No todos son números par\n");
    
    return 0;
}
