//
//
//  Created by Armando on 08/03/21.
//
/*
 Escribir un programa que permita calcular el coste de las consumiciones realizadas en un pequeño bar.
 */

#include <stdio.h>

#define CHORIZO 1.10
#define ATUN 1.40

#define AGUA 0.50
#define COLA 0.75
#define NARANJA 0.70

int main(){
    
    int nChorizo, nAtun;
    int nAgua, nCola, nNaranja;
    float total;
    
    printf("Ingrese la cantidad de los siguientes productos: \n");
    
    printf("--- Bocadillos --- \n");
    printf("Chorizo: ");
    scanf("%d", &nChorizo);
    total = nChorizo*CHORIZO;
    printf("Atún: ");
    scanf("%d", &nAtun);
    total = total+(nAtun*ATUN);
    
    printf("--- Bebidas ---\n");
    printf("Agua: ");
    scanf("%d", &nAgua);
    total = total + (nAgua*AGUA);
    printf("Cola: ");
    scanf("%d", &nCola);
    total = total + (nCola*COLA);
    printf("Naranja: ");
    scanf("%d", &nNaranja);
    total = total+(nNaranja*NARANJA);
    
    printf("\n\n\n\n\n     --- Total ---\n\n");
    printf("\tBocadillos\n");
    printf("Chorizo:\t$%.2f\n", nChorizo*CHORIZO);
    printf("Atún:\t\t$%.2f\n", nAtun*ATUN);
    printf("\tBebidas\n");
    printf("Agua:\t\t$%.2f\n", nAgua*AGUA);
    printf("Cola:\t\t$%.2f\n", nCola*COLA);
    printf("Naranja:\t$%.2f\n", nNaranja*NARANJA);
    printf("-----------------------\n");
    printf("Total\t\t$%.2f\n", total);
    
    return 0;
}
