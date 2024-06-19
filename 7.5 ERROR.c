#include <stdio.h>
void cargar_vector(int [] );
void mostrar_vector(int [] );
void cargaProductos(int [], int []);
// Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día.

int main()
{
    int v[10],v2[10];
    cargaProductos(v,v2);
    mostrar_vector(v);
    mostrar_vector(v2);
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


void mostrar_vector(int v[])
{
    int i;
    for (i=1; i<11; i++)
        printf("%d\n", v[i]);

}

void cargaProductos(int vcod[], int v_unidades[])
{
    int i;
    for (i=1; i<11; i++)
    {
        do
        {
            printf("\nIngrese el codigo de producto: ");
            scanf("%d",&vcod[i]);
        }
        while(vcod[i]!=0&&vcod[i]<0||vcod[i]>11);

        while(vcod[i]!=0)
        {
            do
            {
                printf("\nIngrese cuantas unidades quiere del producto %d: ", vcod[i]);
                scanf("%f",&v_unidades[i]);
                fflush(stdin);
            }
            while(v_unidades[i]<0);
        };
    }
}


