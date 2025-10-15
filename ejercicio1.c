#include <stdio.h>

main() {
    int perro = 1870, gato, ivan;
    double div;
    
    printf("Escribe un numero: ");
    scanf("%d", &gato);

    ivan = perro + gato;

    printf("La suma de estos numeros es: %d\n", ivan);
    
    printf("Escribe un numero: ");
    scanf("%d", &gato);

    ivan = perro - gato;

    printf("La resta de estos numeros es: %d\n", ivan);
    printf("Escribe un numero: ");
    scanf("%d", &gato);

    ivan = perro * gato;

    printf("La multiplicacion de estos numeros es: %d\n", ivan);
    printf("Escribe un numero: ");
    scanf("%d", &gato);

    div = perro / gato;

    printf("La division de estos numeros es: %lf\n", div);
    
    printf("Escribe un numero: ");
    scanf("%d", &gato);

    ivan = perro % gato;

    printf("El residuo de estos numeros es: %d\n", ivan);
}