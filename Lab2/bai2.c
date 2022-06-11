#include "stdio.h"
void slove(float cDai, float cRong)
{
    float chuVi,dienTich;
    chuVi= (cDai+cRong)*2;
    printf("Chu vi hinh chu nhat la:  %.2f",chuVi);
    dienTich=(cDai*cRong);
    printf("\nDien tich hinh chu nhat la: %.2f",dienTich);
}
int main(){
    float cDai,cRong;
    printf("Nhap vao chieu dai, chieu rong: ");
    scanf("%f%f",&cDai,&cRong);
    slove(cDai,cRong);
    return 0;
}