//  Created by Armando on 08/03/21.
//

/*
 Una empresa de venta de recambios de automóviles necesita un programa que calcule y muestre el precio de venta en euros de los productos.
*/

#include <stdio.h>

int main(){
    // Declaramos las variables que vamos a utilziar
    float precioCompra;
    float margen;
    float precioVenta;
    float ganancia;
    
    // Pedimos que ingrese los valores
    printf("Ingrese el precio de compra: ");
    scanf("%f", &precioCompra);
    printf("Ingrese el margen: ");
    scanf("%f", &margen);
    
    // Calculamos la ganancia
    ganancia = precioCompra * (margen/100);
    
    // Calculamos el precio de venta
    precioVenta = precioCompra + ganancia;
    
    // Mostramos el resultado
    printf("El producto se debe vender en: %.2f euros\n", precioVenta);
    
    return 0;
}
