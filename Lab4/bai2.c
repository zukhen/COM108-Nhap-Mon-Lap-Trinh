#include "stdio.h"
#include "math.h"
void slove(int n)
{
    int i=2,count=0;
    if (n < 0)
    {
        printf("vui long nhap n>0");
    }
    else if (n == 1)
    {
        printf("%d khong phai la so nguyen to.", n);
    }
    else
    {
        while (i <= sqrt(n))
        {
            if (n % i == 0)
            {
                count++;
            }
            i++;
        }
        if (count == 0)
        {
            printf("%d la so nguyen to", n);
        }
        else
        {
            printf("%d khong phai la so nguyen to", n);
        }
    }
}
int main()
{
    int n = 0,count = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    slove(n);
    return 0;
}
