/* fichero sumaInt.c */ 
/* Programa para calcular la suma de los enteros del 1 al 5 */ 
#include <stdio.h> 
void main(void) { 
    int i=1, suma=0; 

    while (i<=5) { /* se ejecuta el bloque mientras i<=5 */ 
    suma+=i; /* equivale a suma=suma+i; */ 
    ++i; /* equivale a i=i+1; */ 
    } 
    printf("suma = %d\n", suma); 
    return 0;
} 