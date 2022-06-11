#include "stdio.h"
void nhapmang()
{
    int n,m;
    printf("Nhap phan tu cho mang 2 chieu: ");
    scanf("%d%d",&n,&m);
    int array[n][m],i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <m; j++)
        {
        printf("Nhap phan tu thu a[%d][%d]: ",i,j);
        scanf("%d",&array[i][j]);
        }
    }
    printf("Mang binh phuong: \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <m; j++)
        {
           printf("%d\t",array[i][j]*array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    nhapmang();
    return 0;
}
