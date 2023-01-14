/* fichero sumaInt.c */ 
/* Programa para calcular la suma de los enteros del 1 al 5 */ 
#include <stdio.h> 
void main(void) { 
    int i, suma=0; 

    for(i=0 ; i<=5 ; i++) {
        suma+=i; /* equivale a suma=suma+i; */ 
        ++i; /* equivale a i=i+1; */ 
    } 

    printf("suma de los primero cinco numeros es = %d\n", suma); 
    return 0;
} 