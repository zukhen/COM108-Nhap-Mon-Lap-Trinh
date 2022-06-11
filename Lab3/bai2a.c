#include <stdio.h>
#include <math.h>
void slove(float a, float b, float c)
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
        float delta = b * b - 4 * a * c;
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
            printf("Phuong trinh co nghiem kep x= %.2f", x);
        }
        else if (delta < 0)
        {

            printf("Phuong trinh vo nghiem");
        }
    }
}
int main()
{
    float a = 0, b = 0, c = 0;
    printf("Nhap gia tri a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    slove(a, b, c);
    return 0;
}
