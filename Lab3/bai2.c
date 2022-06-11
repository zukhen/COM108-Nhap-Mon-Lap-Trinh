#include "stdio.h"
void slove(float a, float b)
{
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh co vo so nghiem.");
        }
        else
        {
            printf("Phuong trinh vo nghiem.");
        }
    }
    else
    {
        float x = -b / a;
        printf("phuong trinh co nghiem x= %.2f", x);
    }
}
int main()
{
    float a = 0, b = 0;
    printf("Nhap gia tri a,b: ");
    scanf("%d%d", &a, &b);
    solve (a,b);
    return 0;
}
