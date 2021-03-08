//  Created by Armando on 08/03/21.
//

/*
 Escribir un programa en lenguaje C que pida al usuario por teclado y por separado tres cadenas de texto: nombre, primer apellido y segundo apellido, para dos personas. Seguidamente deberá preguntar por el nombre de su hijo/a y con estos datos visualizar por pantalla el nombre completo del hijo/a (utilizando los primeros apellidos de sus padres).
*/

#include <stdio.h>
#include <math.h> // para calcular raiz cuadrada

int main(){
    // Declaramos la variable que vamos a utilziar
    // para los nombres
    char nombre1[20], nombre2[20], nombreHijo[20];
    // Para los apellidos paternos
    char apellidoP1[20], apellidoP2[20];
    // para los apellidos maternos
    char apellidoM1[20], apellidoM2[20];
    
    printf("Ingrese los datos del padre: ");
    scanf("%s", nombre1);
    scanf("%s", apellidoP1);
    scanf("%s", apellidoM1);
    
    printf("Ingrese los datos de la madre: ");
    scanf("%s", nombre2);
    scanf("%s", apellidoP2);
    scanf("%s", apellidoM2);
    
    printf("Nombre del hijo: ");
    scanf("%s", nombreHijo);
    
    printf("El nombre completo del hijo es:\n%s %s %s\n", nombreHijo, apellidoP1, apellidoP2);
    
    return 0;
}
