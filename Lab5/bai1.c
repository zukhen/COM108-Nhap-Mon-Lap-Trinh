#include "stdio.h"
int slove(int so1, int so2, int so3)
{
    int max= so1;
    if (so2 > max)
    {
        max = so2;
    }
    if (so3 > max)
    {
        max = so3;
    }
    return max;
}
int main()
{
    int soMAX = slove(3, 5, 10);
    printf("so lon nhat la: %d ", soMAX);
}