/*7.1.8 Se ingresan DNI y nota de un parcial de los alumnos de un curso. El ingreso de datos finaliza con un DNI
negativo. Se sabe que como máximo pueden presentarse a rendir 60 alumnos. Mostrar:
a. Listado de alumnos con su correspondiente DNI y la nota obtenida (en forma de listado)
b. La máxima nota obtenida y el DNI de los alumnos que la obtuvieron.*/

#include <stdio.h>
#include <stdlib.h>
int Buscar(int[],int, int);
int IngresarDatos(int [], int[], int);
void Listado(int [], int[], int);
int NotaMaxima(int[], int);
void MostrarDNINotaMaxima(int[],int[],int, int);

int main()
{
    int DNIs[60], notas[60], cant, max;
    cant = IngresarDatos(DNIs,notas,60); //mientras se ingrese algun dato y entonces la funcion tenga algun valor mayor a 0
    if (cant>0)
    {
        Listado(DNIs,notas,cant); // no es necesario que guardes estos datos en nuevas variables porque en la misma funcion
        //tenes la orden de printf
        max = NotaMaxima(notas,cant);
        printf ("\n\nLa nota maxima fue de %d y corresponde a los alumnos con DNI:",max);
        MostrarDNINotaMaxima(DNIs,notas,max,cant); // no es necesario que guardes estos datos en nuevas variables porque en la misma funcion
        //tenes la orden de printf
    }
    else
        printf("No se ingresaron datos.");

    return 0;
}
//////////////////////////////////////////////////
int Buscar(int v[],int buscado, int ce) // buscamos que no se dupliquen los datos
{
    int pos=-1,i=0; // inicializamos variables
    while(pos==-1 && i<ce) // mientras que pos no equivala a -1 y CUALQUIER NUMERO sea menor que la cant de elementos del vector
        if(v[i]==buscado) // si algun numero es igual a buscado, la posicion es esa
            pos =i;
        else
            i++; //sino me muevo, devuelvo la posicion
    return pos;
}


int IngresarDatos(int vDNIs[], int vNotas[], int ce)
{
    int i=0,pos;
    do
    {
        printf("Ingrese DNI (negativo fin):");
        scanf("%d",&vDNIs[i]);
    }while(vDNIs[i]==0); // mientras que cualquier dni no equivala a 0

    while (i<ce && vDNIs[i] >0)
    {
        do
        {
            printf("Ingrese la nota del alumno:");
            scanf("%d", &vNotas[i]);
        }while(vNotas[i]<0||vNotas[i]>10); // mientras las notas no sean menores a 0 ni mayores a 10

        i++; //me muevo a la siguiente posicion libre del vector

        if (i<ce) //si hay espacio en el vector
        {
            do //ingreso otro dni
            {
                printf("\nIngrese DNI (negativo fin):");
                scanf("%d",&vDNIs[i]);
                pos = Buscar(vDNIs,vDNIs[i],i);
                if (pos!=-1)
                    printf("\nDNI duplicado.");
            }while(vDNIs[i]==0 || pos!=-1); // buscar mientras sea diferente a 0 y no sea igual a -1
        }
    }
    return i;
}


void Listado(int vDNIs[], int vNotas[], int ce)
{
    int i;
    printf("\n     DNI    NOTA");
    for (i=0;i<ce;i++)
        printf("\n%8d%5d",vDNIs[i],vNotas[i]); //  el dni debe tener 8 digitos, esto igual solo muestra por la antidad de elementos
        // acordate q no podes poner printf(vector) pq no es valido, tenes que hacer una funcion aparte y hacer un loop dentro de esa funcion
        // cuando la llamas en el main le pones los valores max elementos, mientras tanto en la funcion es un valor general 'i', 'x','j'
}


int NotaMaxima(int vNotas[], int ce)
{
    int i,max;
    max= vNotas[0]; // el maximo de notas es la primera q se ingrsa
    for (i=1;i<ce;i++) // por el loop q sea
        if (vNotas[i]>max) // si cualquier numero d las notas SUPERA al maximo establecido
            max = vNotas[i]; // el maximo se convierte en esa nota

    return max; //devuelve el maximo
}


void MostrarDNINotaMaxima(int vDNIs[] ,int vNotas[],int notaMax, int ce)
{
    int i;
    for (i=0;i<ce;i++)
    {
        if (vNotas[i]==notaMax)
            printf("\n%d", vDNIs[i]);
    }
}

