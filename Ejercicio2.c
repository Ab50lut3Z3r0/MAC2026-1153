#include <stdio.h>

main() {
    int a, b, c;
    printf("Escribe dos numeros: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Los numeros intercambiados son: %d %d\n", a, b);    
}