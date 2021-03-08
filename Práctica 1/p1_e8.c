//  Created by Armando on 08/03/21.
//

/*
 Escribir un programa en C que pida al usuario que elija un número del 1 al 9 y a partir del resultado de una serie de operaciones le diga su edad y el número que pensó.
*/

#include <stdio.h>
#include <math.h> // para calcular raiz cuadrada

int main(){
    // Declaramos la variable que vamos a utilziar
    int resultado;
    int edad, num;
    
    // Damos las instrucciones
    printf("Piensa un número del 1 al 9.\n\n");
    printf("Multiplica tu edad por 10 y restale el número\n");
    printf("que has pensado multiplicado por 9.\n");
    
    // Pedimos que nos de el resultado
    printf("Dame el resultado: ");
    scanf("%d", &resultado);
    
    // Extraemos el último digito del resultado
    num = resultado-((resultado/10)*10);
    // Obtenemos la edad
    // - Primero obtenemos los dos primeros digitos y luego sumamos con num;
    edad = (resultado/10)+num;
    
    printf("Tu esdad es %d y el número que has pensado es el %d.\n", edad, num);
    
    return 0;
}
