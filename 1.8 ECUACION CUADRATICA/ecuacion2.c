/* fichero ecuacion2.c */ 
/* resolución de la ecuación de segundo grado */ 
#include <stdio.h> 
#include <math.h> /* incluye decl. de la función sqrt() */ 
void main(void) { 

        double a, b, c; 
        double discr, x1, x2, xd, xr,xi; 

        printf("Escribe los valores de los coeficientes A, B y C\n"); 
        scanf("%lf%lf%lf", &a, &b, &c); 
        discr=b*b-4.0*a*c; 

        if (discr>0.0) { 
            x1=(-b+sqrt(discr))/(2.0*a); 
            x2=(-b-sqrt(discr))/(2.0*a); 
            printf("\nLas dos raices reales son: %12.6f y %12.6f \n", 
            x1, x2); 
        } else if (discr<0.0) { 
            xr=-b/(2.0*a); 
            xi=sqrt(-discr)/(2.0*a); 
            printf("\nRaices complejas:\n"); 
            printf("x1=%12.6f +%12.6f i\nx2=%12.6f -%12.6f i\n", xr, xi, xr, xi); 
        } else { 
            x1 = -b/(2.0*a); 
            printf("\nLas dos raices son iguales y valen: %12.6f \n", x1); 
        } 
} 
