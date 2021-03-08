//  Created by Armando on 08/03/21.
//

/*
 Escribir un programa en lenguaje C que pida al usuario por teclado las coordenadas (x,y) de dos puntos (x1,y1), (x2,y2) y que calcule la distancia geométrica que hay entre ellos.
*/

#include <stdio.h>
#include <math.h> // para calcular raiz cuadrada

int main(){
    // Declaramos la variable que vamos a utilziar
    int x1, x2, y1, y2;
    float distancia;
    
    // Pedimos los valores
    printf("Ingrese las coordenadas (x,y)\n");
    printf("X1: ");
    scanf("%d", &x1);
    printf("Y1: ");
    scanf("%d", &y1);
    printf("X2: ");
    scanf("%d", &x2);
    printf("Y2: ");
    scanf("%d", &y2);
    
    // Calculamos la distancia
    // Usamos pow(base, n) para elevar un número
    // Aplicamos la fórmula d^2 = (x2-x1)^2+(y2-y1)^2
    distancia = pow(x2-x1, 2)+pow(y2-y1, 2);    // obtenemos d^2
    distancia = sqrt(distancia);                // obtenemos d
    
    printf("La distancia es: %.3f", distancia);
    
    
    return 0;
}
