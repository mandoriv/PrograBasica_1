//  Created by Armando on 08/03/21.
//

/*
 Escribir un programa que pida al usuario una letra minúscula y una letra mayúscula. Posteriormente, se deberá escribir la letra minúscula en mayúsculas y la mayúscula en minúsculas.
*/

#include <stdio.h>
#include <math.h> // para calcular raiz cuadrada

int main(){
    // Declaramos la variable que vamos a utilziar
    char minuscula;
    char mayuscula;
    
    printf("Escribe una letra minuscula: ");
    scanf(" %c", &minuscula);
    printf("Escribe una letra mayuscula: ");
    scanf(" %c", &mayuscula);
    
    printf("La letra '%c' en mayuscula es '%c'.\n", minuscula, minuscula-32);
    printf("La letra '%c' en minuscula es '%c'.\n", mayuscula, mayuscula+32);
    
    return 0;
}
