/* fichero mascota.c */ 
#include <stdio.h> 
void main(void) 
{ 
    int calzado; 
    float peso; 
    char color[30]; 
    printf("Confiesa tu calzado, peso y color favorito!.\n"); 
    scanf("%d %f",&calzado, &peso); 
    scanf("%s", color); 
    printf("%d %.0f kg. %s\n",calzado,peso,color); 
    printf("El %s!!", color); 
    printf(" Como te puede gustar el %s?\n", color); 
    printf("calzando un %d y pesando %6.2f Kg.?\n", calzado, peso); 

    return 0;
}