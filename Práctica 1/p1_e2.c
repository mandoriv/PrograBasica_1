//
//  p1_e1.c
//  
//
//  Created by Armando on 08/03/21.
//

/*
 Desarrollar un programa que pida la ficha de un alumno y la muestre por pantalla.
 La ficha de un alumno está formada por su nombre, primer apellido, segundo apellido, NIF, sexo (H/M), edad y número de créditos matriculados.
 Nótese que el número de créditos puede contener decimales. Ejemplo: 13.5 créditos.
 El programa deberá declarar variables del tipo adecuado para almacenar cada uno de los componentes de la ficha, asignarles el valor que el usuario introduzca y por último mostrar toda la información almacenada. */

#include <stdio.h>

int main(){
    // Declaramos las variables que vamos a utilziar
    char nombre[20];
    char apellidoPat[20];
    char apellidoMat[20];
    int nif;
    char sexo;
    int edad;
    float creditos;
    // Pedimos que ingrese los datos
    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Primer apellido: ");
    scanf("%s", apellidoPat);
    printf("Segundo apellido: ");
    scanf("%s", apellidoMat);
    printf("NIF: ");
    scanf("%d", &nif);
    printf("Sexo (H/M): ");
    scanf(" %c", &sexo);
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Número de créditos acumulados: ");
    scanf("%f", &creditos);
    // Mostramos en pantalla los datos que acabamos de leer
    printf("Los datos del alumno son:\n\n");
    printf("Nombre compreto: %s %s %s\n", nombre, apellidoPat, apellidoMat);
    printf("NIF: %d\n", nif);
    printf("Sexo: %c\n", sexo);
    printf("Edad: %d\n", edad);
    printf("Número de créditos acumulados: %.1f", creditos);
}
