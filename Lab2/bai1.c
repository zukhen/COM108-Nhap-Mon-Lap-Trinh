#include "stdio.h"
int slove(int a, int b)
{
    printf("Tong cua: %d + %d = %d ", a, b, a + b);
    printf("\nHieu cua: %d - %d = %d", a, b, a - b);
}
int main()
{
    int a, b;
    printf("Nhap vao 2 so a,b: ");
    scanf("%d%d", &a, &b);
    slove(a, b);
    return 0;
}