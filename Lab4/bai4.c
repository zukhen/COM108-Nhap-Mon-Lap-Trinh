#include <stdio.h>
#include "math.h"
void b1()
{
    int min, max, tong, i, count = 0;
    printf("Nhap Min,Max: ");
    scanf("%d%d", &min, &max);
    i = min;
    while (i <= max)
    {
        if (i % 2 == 0)
        {
            tong += i;
            count++;
        }
        i++;
    }
    float tB = (float)tong / count;
    printf("Trung binh tong cac so tu nhien chie het cho 2 tu %d toi %d= %.0f", min, max, tB);
}
void b2()
{
    int n, i=2, count = 0;
    printf("Nhap N:");
    scanf("%d", &n);
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
void b3()
{
    int x, i, count = 0;
    printf("Nhap N:");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        if (i * i == x)
        {
            count++;
        }
    }
    if (count == 1)
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

    int luachon = 0;
    do
    {
        printf("\n++-------------------------------------------++");
        printf("\n| Chuc nang 1: Tinh trung binh tong.          |");
        printf("\n| Chuc nang 2: Tim so nguyen to.              |");
        printf("\n| Chuc nang 3: Tim so chinh phuong.           |");
        printf("\n| Chuc nang 4: Thoat.                         |");
        printf("\n++-------------------------------------------++");
        printf("\nXin moi chon chuc nang (1, 2, 3, 4): ");
        scanf("%d", &luachon);
        switch (luachon)
        {
        case 1:
            b1();
            break;
        case 2:
            b2();
            break;
        case 3:
            b3();
            break;
        case 4:
            printf("Hen gap lai.");
            break;
        default:
            printf("vui long nhap lai");
            break;
        }
    } while (luachon != 4);

    return 0;
}
