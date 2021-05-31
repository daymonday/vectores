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
{
    int x=0;
    do
    {
        system("cls");
        printf("\n Ingrese D.N.I:");
        scanf("%d",&dni[x]);
    }
    while((dni[x]<10000||dni[x]>99999999)&&dni[x]!=99);  // ingresamos el dni y verificamos que este entre el rango y no sea 99

    while(dni[x]!=99) //como no es 99, entra en el loop
    {
        do
        {
            printf("\n Ingrese Sector [1 a 5]:");
            scanf("%d",&cod[x]);
        }
        while(cod[x]<1||cod[x]>5); // verificamos que el codigo sea entre 1 y 5, sino te lo pregunta otra vez HASTA q sea uno de esos numeros
        do
        {
            printf("\n Ingrese Sueldo  :");
            scanf("%d",&sueldo[x]);
        }
        while(sueldo[x]<0); // verificamos que el sueldo sea mayor a 0, sino te lo pregunta otra vez HASTA q sea uno de esos numeros
        x++; // al final de esto, contamos 1 más
        do
        {
            system("cls");
            printf("\n Ingrese D.N.I:");
            scanf("%d",&dni[x]);
        }
        while((dni[x]<10000||dni[x]>99999999)&&dni[x]!=99); //comenzamos de nuevo con el dni
    }
    return x; // nos devuelve la cantidad de personas

}

void cuentaporsector(int codigo[],int sector[],int c)
{
    int i; // inicializa i
    for(i=0; i<c; i++) // for loop para C veces
    {
        codigo[sector[i]-1]++; /* como los codigos los ingresamos de 1 a 5 inclusive, le restamos 1 para que empiece en 0, CONTAMOS
        lo que nos permite sector[i] es no usar el switch*/
    }
    printf("\n Listado Cantidad de Empleados por Sector \n");
    printf("\n Sector  Cantidad \n");
    for(i=0; i<5; i++)
    {
        printf("\n %d     %d",i+1,codigo[i]); //volvemos a sumar 1 para que a la pantalla le aparezca tal cual lo ingreso
    }
}

void totalapagar(int sue[],int t) // aca no entendiste la consigna, no era sumar sueldo por sector, sino sumar sueldo TOTAL
{
    int Acumula=0,x; // acumula los valores de un vector, en este caso sueldo, y devuelve un texto
    for(x=0; x<t; x++) // durante tantas veces se va acumular, etc
    {
        Acumula+=sue[x];
    }
    printf("\n Total Abonado en Sueldos \n");
    printf("    son $ %d\n",Acumula);
}

void ordenarvector(int codii[],int u) // esto es burbujeo, pag 17 unidad 7
{
    int Nsec[5]= {1,2,3,4,5}; // numero de sectores
    int codigg=0,i,aux;
    while(codigg==0) // mientras codii sea 0
    {
        codigg=1; // codii se convierte en 1
        for(i=0; i<u-1; i++) // entra en loop, resta uno para que comience en 0
        {
            if(codii[i]>codii[i+1]) // si cualquier num de codii supera a codii+1
            {
                aux=codii[i]; // a codii lo metemos en un auxiliar
                codii[i]=codii[i+1]; // codii se convierte en codii + 1, para q muestre por pantalla bien
                codii[i+1]=aux; // este codii +1 es nuestro auxiliar
                aux=Nsec[i]; // el auxiliar se convierte en el codigo de sector. Por proxy, codii se convierte en codigo sector
                Nsec[i]=Nsec[i+1]; // codigo de sector es lo mismo que codigo de sector + 1, para q muestre por pantalla bien
                Nsec[i+1]=aux; // el codigo de sector +1 es nuestro auxuliar
                codigg=0; // entonces, codii es 0
            }
        }
    }
    printf("\n Listado Ordenado Cantidad de Empleados por Sector \n");
    printf("\n Sector   Cantidad \n");
    for(i=0; i<5; i++)
    {
        printf("\n %d     %d",Nsec[i],codii[i]);
    }

}
