//  Created by Armando on 08/03/21.
//

/*
 Desarrollar un programa que dado un carácter muestre su código ASCII y que dado un número entero muestre el carácter que tiene ese código ASCII.
*/

#include <stdio.h>
#include <math.h> // para calcular raiz cuadrada

int main(){
    // Declaramos la variable que vamos a utilziar
    int codigo;
    char caracter;
    
    // Leemos el caracter
    printf("Introduce un caracter: ");
    scanf("%c", &caracter);
    printf("El caracter '%c' tiene el código ASCII %d.\n", caracter, caracter);
    
    // Leemos el código
    printf("Introduce un código ASCII: ");
    scanf("%d", &codigo);
    printf("El código ASCII %d se corresponde con el caracter '%c'.\n", codigo, codigo);
    
    return 0;
}
