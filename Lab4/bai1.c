#include "stdio.h"
float slove(int min, int max)
{
    float tong=0 , Dem = 0,TB;
    int i=min;
     for ( i; i <=max; i++)
    {
        if (i%2==0)
        {
            tong+=i;
            Dem++;
        }
    }
    return TB=tong/Dem;
}
int main()
{
    int min,max;
    printf("Nhap Min,Max: ");
    scanf("%d%d",&min,&max);
    printf("Trung binh tong cac so tu nhien chie het cho 2 tu %d toi %d= %.2f",min,max,slove(min,max));
    return 0;
}

