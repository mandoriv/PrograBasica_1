//
//
//  Created by Armando on 08/03/21.
//
/*
 Implementar un programa que dado un número entero indique si es par o impar, así como si es un múltiplo de 7 o no.
 */

#include <stdio.h>

int main(){
    // Variable que necesitamos
    int x;
    
    printf("Ingresa un número: ");
    scanf("%d", &x);
    
    if(x%2!=0)
        printf("Es un número impar\n");
    else
        printf("Es un número par\n");
    
    if((x%7!=0)||(x==0))
        printf("No es múltiplo de 7\n");
    else{
        printf("Es múltiplo de 7\n");
    }
    
    return 0;
}
