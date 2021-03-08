//  Created by Armando on 08/03/21.
//

/*
 Realizar un programa que pida al usuario un carácter e indique por pantalla sus caracteres anterior y siguiente en la tabla ASCII.
*/

#include <stdio.h>

int main(){
    // Declaramos la variable que vamos a utilziar
    char caracter;
    
    // Leemos el caracter
    printf("Ingrese el caracter: ");
    scanf("%c", &caracter);
    
    // Mostramos el caracter anterior y siguiente
    printf("anterior: %c\n", caracter-1);
    printf("siguiente: %c\n", caracter+1);
    
    return 0;
}
