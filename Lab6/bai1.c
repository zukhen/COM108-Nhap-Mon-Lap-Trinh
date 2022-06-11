#include "stdio.h"
const int MAX =100;
void nhapmang(int n, int arr[])
{
    int i,Sum =0,count=0;
    for ( i = 0; i < n; i++)
    {
        printf("Nhap vao du lieu thu %d: ",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (arr[i]%3==0)
        {
            Sum+= arr[i];
            count++;
        }
    }
    float tb = (int) Sum / (int) count;
    printf("trung binh cac so chia het cho 3 la:  %.2f",tb);
    
}
int main()
{
    int n,arr[MAX];
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    nhapmang(n,arr);
    return 0;
}