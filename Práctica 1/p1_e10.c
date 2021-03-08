//  Created by Armando on 08/03/21.
//

/*
 Escribir un programa que pida al usuario una letra minúscula y una letra mayúscula. Posteriormente, se deberá escribir la letra minúscula en mayúsculas y la mayúscula en minúsculas.
*/

#include <stdio.h>
#include <math.h> // para calcular raiz cuadrada

int main(){
    // Declaramos la variable que vamos a utilziar para las cajas
    int grandes, medianas, pequenas, sueltas;
    int cantidad;
    
    printf("Número de alumnos para este modelo: ");
    scanf("%d", &cantidad);
    
    /*
        Cajas grandes:  50 unidades
        Cajas medianas: 20 unidades
        Cajas pequeñas: 5 unidades
     */
    // Primero obtenemos las cajas grandes
    grandes = cantidad/50;
    // Restamos las agendas que ya estan en las cajas grandes
    cantidad = cantidad - (grandes*50);
    // Obtenemos las cajas medianas
    medianas = cantidad/20;
    // Restamos las agentas que ya estan en las cajas medianas
    cantidad = cantidad - (medianas*20);
    // Obtenemos las cajas pequeñas
    pequenas = cantidad/5;
    // Restamos las agentas que ya estan en las cajas medianas
    cantidad = cantidad - (pequenas*5);
    // Lo que nos queda son las agendas sueltas
    sueltas = cantidad;
    
    printf("Para este modelo hay que comprar:\n");
    printf("- cajas grandes:\t%d\n", grandes);
    printf("- cajas medianas:\t%d\n", medianas);
    printf("- cajas pequeñas:\t%d\n", pequenas);
    printf("- Agendas sueltas:\t%d\n", sueltas);
    
    return 0;
}
