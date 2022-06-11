#include "stdio.h"
void nhapmang(int n,int array[])
{
    int i,j;
    for ( i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu a[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for ( i = 0; i <n; i++)
    {
        for (j = 0; j <n; j++)
        {
           if (array[i]>array[j])
           {
               int temp = array[i];
               array[i]=array[j];
               array[j]=temp;
           }      
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",array[i]);
    }
    
}

int main()
{
    int n,array[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    nhapmang(n,array);
    return 0;
}