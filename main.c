/*7.1.4 Construir una funci�n que reciba dos vectores enteros de igual tama�o y retorne un 1 si son guales o un
0 sino lo son. ------------------------- 31.05.21 00:49 AM
*/
#include <stdio.h>
#include <stdlib.h>
int comparar(int,int);

int main()
{ int i, vec1[3],vec2[3],resultado;
    for(i=0;i<3;i++)
    {
        printf("Carga 3 elementos de vector 1");
        scanf("%d",&vec1[i]);
    }
        for(i=0;i<3;i++)
    {
        printf("Carga 3 elementos de vector 2");
        scanf("%d",&vec2[i]);
    }
    resultado=comparar(vec1,vec2);
    printf("�Los vectores son iguales? 1 si, 0 no:\n%d",resultado);
    return 0;
}

int comparar(int v1[],int v2[])
{
    int i;
    if(v1[i]==v2[i])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
