#include "stdio.h"
void nhapmang(int n,int array[])
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu a[%d]: ",i);
        scanf("%d",&array[i]);
    }
    int max=array[2];
    for ( i = 0; i < n; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("\nGia tri lon nhat trong mang la: %d",max);
}
int main()
{
    int n,array[100];
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    nhapmang(n,array);
    return 0;
}