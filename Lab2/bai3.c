#include "stdio.h"
#include "math.h"
void slove(float banKinh){
    float dienTich= 3.14 * banKinh*banKinh;
    float chuVi=2*3.14*banKinh;
    printf("Chu vi hinh tron la: %.2f",chuVi);
    printf("\nDien tich hinh tron la: %.2f ",dienTich);

}
int main()
{
    float banKinh;
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f",&banKinh);
    slove(banKinh);
    return 0;
}