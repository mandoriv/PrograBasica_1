//
//
//  Created by Armando on 09/03/21.
//
/*
 Escribir un programa que pida al usuario tres números enteros y luego los muestre ordenados de menor a mayor.
 */

#include <stdio.h>

int main(){
    
    int num1, num2, num3;
    
    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);
    
    printf("Ingresa el tercer número: ");
    scanf("%d", &num3);
    
    if((num1<=num2)&&(num1<=num3)){
        printf("%d\n", num1);
        if(num2<=num3)
            printf("%d\n%d\n", num2, num3);
        else
            printf("%d\n%d\n", num3, num2);
    }
    else if((num2<=num1)&&(num2<=num3)){
        printf("%d\n", num2);
        if(num1<=num3){
            printf("%d\n%d\n", num1, num3);
        }
        else
            printf("%d\n%d\n", num3, num1);
    }
    else{
        printf("%d\n", num3);
        if(num1<=num2)
            printf("%d\n%d\n", num1, num2);
        else
            printf("%d\n%d\n", num2, num1);
    }
    
}
