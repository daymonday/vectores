/*Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como
máximo la empresa tiene 100 empleados. Se desea:
a. Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un
empleado con DNI 99.
b. Generar un vector con la cantidad de empleados en cada sector mediante la función
CuentaPorSector y mostrarlo en forma de listado.
c. Determinar el importe total a pagar de sueldos mediante la función TotalAPagar.
d. Volver a mostrar el listado de cantidad de empleados por sector, pero esta vez ordenado de
menor a mayor por cantidad de empleados en cada sector.*/

#include <stdio.h>
#include <stdlib.h>

int cargaempleados(int[],int[],int[],int);
void cuentaporsector(int[],int[],int);
void totalapagar(int[],int);
void ordenarvector(int[],int);

int main()
{
    int vec_dni[100],vec_sec[100],vec_sueldo[100],vec_cod[5];
    int cant;
    cant=cargaempleados(vec_dni,vec_sec,vec_sueldo,100); // SEC de sector, no secuencial
    cuentaporsector(vec_cod,vec_sec,cant);
    totalapagar(vec_sueldo,cant);
    ordenarvector(vec_cod,5);
    return 0;
}


int cargaempleados(int dni[],int cod[],int sueldo[],int n)
{ int i=0;
    printf("\n Ingrese dni de empleado:");
    scanf("%d",&dni[i]);
    fflush(stdin);
    while(dni[i]!=99)
    {
        printf("\n Ingrese codigo de sector de empleado:");
        scanf("%d",&cod[i]);
        fflush(stdin);
        printf("\n Ingrese sueldo de empleado:");
        scanf("%d",&sueldo[i]);
fflush(stdin);
    }
    return 0;
}

void cuentaporsector(int codigo[],int sector[],int c)
{
 int x,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
    switch(codigo[x+1])
    {
    case 1:
        cont1++;
        break;
    case 2:
        cont2++;
        break;
    case 3:
        cont3++;
        break;
    case 4:
        cont4++;
        break;
    case 5:
        cont5++;
        break;
    }
    return 0;
}

void totalapagar(int sue[],int t)
{
    int x=0;
    switch(sue[x+1])
    {
    case 1:
        printf("Debe pagar 300");
        break;
    case 2:
        printf("Debe pagar 400");
        break;
    case 3:
        printf("Debe pagar 500");
        break;
    case 4:
        printf("Debe pagar 600");
        break;
    case 5:
        printf("Debe pagar 800");
        break;
    }
    return 0;

}

void ordenarvector(int codii[],int u)
{
    int i, j, aux, cambio;
    i=0;
    cambio=1; // verdadero, para que entre en la primera iteración
    while(i < u-1 && cambio==1)
    {
        cambio=0;
        for(j = 0; j < u-i-1; j++)
            if(codii[j] > codii[j+1])
            {
                aux=codii[j];
                codii[j] = codii[j+1];
                codii[j+1]= aux;
                cambio=1;
            }
        i++;
    }
}
