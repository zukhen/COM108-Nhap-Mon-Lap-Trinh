#include <stdio.h>
#include <math.h>
void bai1(float Diem)
{
    if (Diem < 0 || Diem > 10)
    {
        printf("vui long nhap diem (0-10)");
    }
    else if (Diem >= 9)
    {
        printf("Hoc luc xuat sac.");
    }
    else if (Diem < 9 && Diem >= 8)
    {
        printf("Hoc luc gioi.");
    }
    else if (Diem < 8 && Diem >= 6.5)
    {
        printf("Hoc luc kha.");
    }
    else if (Diem < 6.5 && Diem >= 5)
    {
        printf("hoc luc trung binh.");
    }
    else if (Diem < 5 && Diem >= 3.5)
    {
        printf("Hoc luc yeu.");
    }
    else if (Diem < 3.5)
    {
        printf("Hoc luc kem.");
    }
}
void ptb1(float a, float b)
{
    float x = 0;
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
        x = -(float)b / (float)a;
        printf("phuong trinh co nghiem x= %.2f", x);
    }
}
void ptb2(float a, float b, float c)
{
    float x = 0;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh co vo so nghiem");
            }
            else
            {
                printf("Phuong trinh vo nghiem");
            }
        }
        else
        {
            x = -(float)c / (float)b;
            printf("phuong trinh co nghiem x= %.2f", x);
        }
    }
    else // ptb2
    {
        float delta = pow(b, 2) - 4 * a * c;
        if (delta > 0)
        {
            printf("Phuong trinh co 2 nghiem rieng biet:\n");
            float x1 = 0, x2 = 0;
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1= %.2f", x1);
            printf("\nx2= %.2f", x2);
        }
        else if (delta == 0)
        {
            x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x= %2f", x);
        }
        else if (delta < 0)
        {

            printf("Phuong trinh vo nghiem");
        }
    }
}
void b3(float kWH)
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
        else if (kWH > 401)
        {
            printf("so tien can phai dong la: %.1f", kWH * Bac6);
            printf("vnd");
        }
}
int main()
{
    float Diem = 0, a = 0, b = 0, c = 0, kWH = 0;
    int luachon = 0;
    printf("Bai thuc hanh so 3");
    printf("\n1: XAY DUNG CHUONG TRINH TINH HOC LUC.");
    printf("\n2: XAY DUNG CHUONG TRINH GIAI PHUONG TRINH.");
    printf("\n3: XAY DUNG CHUONG TRINH TINH TIEN DIEN.");
    printf("\nVui long nhap lua chon: ");
    scanf("%d", &luachon);
    switch (luachon)
    {
    case 1:
        printf("Nhap vao diem cua sinh vien: ");
        scanf("%f", &Diem);
        bai1(Diem);
        break;
    case 2:
        printf("1: GIAI PHUONG TRINH BAC 1.");
        printf("\n2: GIAI PHUONG TRINH BAC 2.");
        printf("\nVUI LONG LUA CHON: ");
        scanf("%d", &luachon);
        switch (luachon)
        {
        case 1:

            printf("Nhap gia tri a,b: ");
            scanf("%f%f", &a, &b);
            ptb1(a, b);
            break;
        case 2:
            printf("Nhap gia tri a,b,c: ");
            scanf("%f%f%f", &a, &b, &c);
            ptb2(a, b, c);
            break;
        default:
            printf("vui long nhap lai.");
            break;
        }
        break;
    case 3:
        printf("Nhap so dien tieu thu hang thang: ");
        scanf("%f", &kWH);
        b3(kWH);
        break;
    default:
        printf("vui long nhap lai.");
        break;
    }
    return 0;
}
