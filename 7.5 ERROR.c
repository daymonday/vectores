#include <stdio.h>
int valida_rango(int,int);
void mostrar_vector(int [] );
void cargaProductos(int [],int);
// Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Puede haber múltiples pedidos de un producto y no hay límite en cantidad

int main()
{
    int cod=0,v[10]= {0};
    cod=valida_rango(0,10);
    while(cod!=0)
    {
        cargaProductos(v,cod);
        cod=valida_rango(0,10);
    }
    system("pause");
    mostrar_vector(v);
    return 0;
}

int valida_rango(int min,int max)
{
    int cod;
    printf("Ingrese un codigo: ");
    scanf("%d",&cod);
    while(cod>max||cod<min)
    {
        printf("\n Error. Reingrese codigo: ");
        scanf("%d",&cod);
    }

    fflush(stdin);
    return cod;
}

void cargaProductos(int v[],int cod)
{
    int cant=0;
    printf("\nIngrese cuantas unidades quiere:");
    scanf("%d",&cant);
    if(cant>0)
    {
        v[cod-1]=+cant;
        fflush(stdin);
    }
    else
    {
        printf("\nError. Ingrese un numero positivo\n");
    }
    ;
}

void mostrar_vector(int v[])
{
    int i;
    for (i=0; i<10; i++)
        printf("%d\n", v[i]);

}






