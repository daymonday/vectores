#include <stdio.h>
void cargar_vector(int [] );
void mostrar_vector(int [] );
void unirvectores(int [],int [], int []);
// genere un vector de 10 posiciones con el contenido de ambos vectores intercalados

int main()
{
    int v[5],v2[5],v3[10];
    cargar_vector(v);
    printf("\n\n***SEGUNDO VECTOR***\n\n");
    cargar_vector(v2);
    unirvectores(v,v2,v3);
    mostrar_vector(v3);
    return 0;
}

void cargar_vector(int v[])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}
void unirvectores(int v[],int v2[], int v3[])
{
    int i;
    for(i=0; i<5; i++)
    {
        v3[2*i]=v[i];
        v3[(2*i)+1]=v2[i];
    }

}

void mostrar_vector(int v[])
{
    int i;
    for (i=0; i<10; i++)
        printf("%d\n", v[i]);

}
