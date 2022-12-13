#include <stdio.h>
int suma(int num1, int num2);

int main()
{
    int sumar;
    int x, y;
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &x, &y);
    printf("Numero 1: %i\n", x);
    printf("Numero 2: %i", y);

    sumar = suma(x, y);
    printf("La suma de los dos numeros es: %i", suma);
    return 0;
}

int suma(int num1, int num2)
{
    int suma = 0;
    suma = num1 + num2;
    return suma;
}