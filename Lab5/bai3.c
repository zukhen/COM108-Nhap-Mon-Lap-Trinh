#include "stdio.h"
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Nhap 2 gia tri a,b ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Sau khi hoan vi: %d%d",a,b);
    return 0;
    
}