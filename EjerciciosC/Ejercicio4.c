#include <stdio.h>

main()
{
    double cal1, cal2, calif;
    printf("Introduce la primera calificacion: ");
    scanf("%lf", &cal1);
    printf("Introduce la segunda calificacion: ");
    scanf("%lf", &cal2);
    if (cal1 < 0 || cal1 > 10 || cal2 < 0 || cal2 > 10)
    {
        printf("Error: Las calificaciones estan mal.\n");
    }
    else
    {
        calif = (cal1 + cal2) / 2;
        printf("La calificacion final es: %lf\n", calif);
    }
}