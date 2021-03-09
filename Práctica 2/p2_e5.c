//
//
//  Created by Armando on 08/03/21.
//

#include <stdio.h>

int main(){
    // Variables que necesitamos
    int x;
    float resultado;
    
    printf("Ingresa el valor de x: ");
    scanf("%d", &x);
    
    if(x<=1)
        resultado = 1 + (1/(x-2))-(3*x);
    else
        resultado = (x*x)-(5*x) + 1;
    
    
    printf("F(%d) = %f\n", x, resultado);
}
