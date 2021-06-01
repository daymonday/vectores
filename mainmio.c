/*7.1.8 Se ingresan DNI y nota de un parcial de los alumnos de un curso. El ingreso de datos finaliza con un DNI
negativo. Se sabe que como máximo pueden presentarse a rendir 60 alumnos. Mostrar:
a. Listado de alumnos con su correspondiente DNI y la nota obtenida (en forma de listado)
b. La máxima nota obtenida y el DNI de los alumnos que la obtuvieron.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dni[60],notas[60],maxnota,maxdni,i;
    do
    {
        printf("Ingrese D.N.I:");
        scanf("%d",&dni[60]);
        fflush(stdin);
    }
    while(dni[60]=-1);

    while(dni[60]=-1)
        {
            do
            {
                printf("Ingrese nota:");
                scanf("%d",&notas[i]);
                fflush(stdin);
            }
            while(notas[60]<0);
            do
            {
                printf("Ingrese D.N.I:");
                scanf("%d",&dni[i]);
                fflush(stdin);
            }
            while(dni!=-1);

            }

    maxnota=notas[0];
    maxdni=dni[0];
    printf("\nListado de notas\nD.N.I**************Notas");
    printf("\n%d**************%d",dni[60],notas[60]);
    printf("\n D.N.I y mayor nota correspondiente:");
    printf("\n%d**************%d",maxdni,maxnota);
    return 0;
}


