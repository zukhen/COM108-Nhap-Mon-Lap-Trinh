#include "stdio.h"
#include "math.h"
void slove(int x)
{
    int i, count = 0;
    for (i = 1; i <= x; i++)
    {
        if (i * i == x)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("%d la so chinh phuong.", x);
    }
    else
    {
        printf("%d khong la so chinh phuong.", x);
    }
}
int main()
{
    int x;
    printf("Nhap N:");
    scanf("%d", &x);
    slove(x);
    return 0;
}