/*
Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()

*/

#include <stdio.h>

int main () {

    int a = 5;
    int *puntero;
    puntero = &a;

    // Direccion de memoria almacenada por el puntero
    printf("Direccion de memoria de 'a': %p\n", puntero);

    // Direccion de memoria de la variable
    printf("Direccion de memoria de 'a': %p\n", a);

    // Direccion de memoria del puntero
    printf("Direccion de memora del puntero: %p",*puntero);




}