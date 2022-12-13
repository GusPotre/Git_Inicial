#include <stdio.h>
void saludo(int dim, char name[dim]);

int main()
{
    char nombre[20];
    int x, y;
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &x, &y);
    printf("Numero 1: %i\n", x);
    printf("Numero 2: %i\n\n", y);

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    saludo(20, nombre);

    return 0;
}

void saludo(int dim, char name[dim])
{
    printf("Hola %s", name);
}