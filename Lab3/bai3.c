#include "stdio.h"
void slove(int kWH)
{
    float Bac1 = 1.678, Bac2 = 1.734, Bac3 = 2.014, Bac4 = 2.536, Bac5 = 2.834, Bac6 = 2.927;

    if (kWH > 0 && kWH <= 50)
    {
        printf("so tien can phai dong la: %.1f", kWH * Bac1);
        printf("vnd");
    }
    else if (kWH > 51 && kWH <= 100)
    {
        printf("so tien can phai dong la: %.1f", kWH * Bac2);
        printf("vnd");
    }
    else if (kWH > 101 && kWH <= 200)
    {
        printf("so tien can phai dong la: %.1f", kWH * Bac3);
        printf("vnd");
    }
    else if (kWH > 201 && kWH <= 300)
    {
        printf("so tien can phai dong la: %.1f", kWH * Bac4);
        printf("vnd");
    }
    else if (kWH > 301 && kWH <= 400)
    {
        printf("so tien can phai dong la: %.1f", kWH * Bac5);
        printf("vnd");
    }
    else
    {
        printf("so tien can phai dong la: %.1f", kWH * Bac6);
        printf("vnd");
    }
}
int main()
{
    int kWH;
    printf("Nhap so dien tieu thu hang thang: ");
    scanf("%d", &kWH);
    slove(kWH);
    return 0;
}
