#include "stdio.h"
void checkPoint(float point)
{
    while (point < 0 || point > 10)
    {
        printf("Vui long nhap point (0-10): ");
        scanf("%f", &point);
        if (point > 0 && point < 10)
        {
            return 0;
        }
    }
    if (point >= 9)
    {
        printf("Hoc luc xuat sac.");
    }
    else if (point < 9 && point >= 8)
    {
        printf("Hoc luc gioi.");
    }
    else if (point < 8 && point >= 6.5)
    {
        printf("Hoc luc kha.");
    }
    else if (point < 6.5 && point >= 5)
    {
        printf("hoc luc trung binh.");
    }
    else if (point < 5 && point >= 3.5)
    {
        printf("Hoc luc yeu.");
    }
    else
    {
        printf("Hoc luc kem.");
    }
}
int main()
{
    float point = 0;
    printf("Nhap vao diem cua sinh vien: ");
    scanf("%f", &point);
    checkPoint(point);
    return 0;
}