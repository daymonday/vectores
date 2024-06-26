#include <stdio.h>

/*En un negocio trabajan 12 vendedores. Cada vez que se realiza una venta durante el día, se emite una factura
donde se indican los siguientes datos:
• Número de Factura (entero, mayor que cero).
• Código de vendedor (entero de 1 a 12).
• Importe de la venta (real, mayor que cero).
La información termina con un número de Factura igual a cero. Al principio del ingreso, se debe solicitar la
fecha del día de procesamiento. Se pide informar con las leyendas aclaratorias:
• Importe total de facturación por cada vendedor y Cantidad de facturas emitidas por vendedor, ,
con el siguiente formato:(...)
*/

void cargarDatos (int [], int [], float);
float cuentaVentas (float);
int cantFacturas ( int[]);

int main()
{
    int i=0,nrofactura[12], codvendedor[12], facturas[12];
    float importe, impvendedor[12];
    cargarDatos ( nrofactura, codvendedor,importe);
     facturas[i]= cantFacturas(nrofactura);
     impvendedor[i] = cuentaVentas (importe);
    /* printf("FECHA: %d / % d / %d",dia,mes,anio);*/
    printf("\n Nro. de Vendedor \t Suma de importe: \t Cant. facturas emitidas:\n");
    for(i=0; i<12; i++)
    {
        printf("\n %d \t %.2f \t %d \n",codvendedor[i+1],impvendedor[i],facturas[i]);
    }
    system("pause");
    return 0;
}


void cargarDatos ( int nrofactura[],int codvendedor[],float importe)
{
    int i=0;
    do
        {
            printf("\n Ingrese el nro. de factura [MAYOR QUE CERO]:");
            scanf("%d",&nrofactura[i]);
            fflush(stdin);
        }
        while(nrofactura[i]<0);

        while(nrofactura[i]!=0)
        {
            /* cant_factura++;
              do
              {
                  printf("\n Ingrese dia:");
                  scanf("%d",&dia);
                  printf("\n Ingrese mes:");
                  scanf("%d",&mes);
                  printf("\n Ingrese anio:");
                  scanf("%d",&anio);

              }
              while(dia==0||mes==0||anio==0);*/
            do
            {
                printf("\n Ingrese codigo de vendedor [1 A 12]:");
                scanf("%d",&codvendedor[i]);
                fflush(stdin);
            }
            while(codvendedor[i]<1||codvendedor[i]>12);
            do
            {
                printf("\n Ingrese importe [MAYOR QUE CERO]:");
                scanf("%f",&importe);
                fflush(stdin);
                /* imp_final++;*/
            }
            while(importe<0);
            do
            {
                printf("\n Ingrese el nro. de factura [MAYOR QUE CERO]:");
                scanf("%d",&nrofactura[i]);
                fflush(stdin);
            }
            while(nrofactura[i]<0);

        }

    }
}

float cuentaVentas (float importe)
{
    int i;
    float impvendedor[i];
    impvendedor[i]=+importe;

    return impvendedor[i];
}

int cantFacturas(int nrofactura[])
{
    int i,facturas[i];
 if(nrofactura[i]!=0)

        {
            facturas[i]=+1;
        }
    return facturas[i];
}
