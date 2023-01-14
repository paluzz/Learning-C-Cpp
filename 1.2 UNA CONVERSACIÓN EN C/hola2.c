/* fichero hola2.c */ 
/* Este programa saluda más personalmente */ 
#include <stdio.h> 

void main(void) { 
    char nombre[30]; 
    printf("Hola! Como te llamas?\n"); 
    scanf("%s", nombre); 
    printf("Que tal estas, %s?\n", nombre); 
    return 0;
} 