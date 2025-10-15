#include <stdio.h>

main () {
    int a,b,res;
    printf("Introduce el primer numero: ");
    scanf("%d", &a);
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);
    res = a/b;
    res = res * b;
    res = a - res;
    printf("El resto de la division es: %d\n", res);
}