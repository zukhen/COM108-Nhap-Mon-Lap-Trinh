#include "stdio.h"
float slove(float toan,float ly,float hoa)
{   
    float trungBinh=((toan*3)+(ly*2)+(hoa*1))/3;
    return trungBinh;
}
void nhapDiem()
{
    float toan,ly, hoa;
    printf("Nhap vao diem Toan: ");
    scanf("%f",&toan);
    printf("Nhap vao diem Ly: ");
    scanf("%f",&ly);
    printf("Nhap vao diem Hoa: ");
    scanf("%f",&hoa);
    printf("Diem trung binh la: %.2f",slove(toan,ly,hoa));
}
int main(){
    nhapDiem();
    return 0;
}