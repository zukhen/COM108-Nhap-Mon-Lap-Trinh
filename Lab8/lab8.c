#include "stdio.h"
#include "string.h"
struct Sinhvien{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
}mangSV[50];
void B1()
{
    int i,n,j,check=0;
    char MS[10];

    printf("Nhap so sinh vien muon them: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Sinh vien: %d\n",i+1);fflush(stdin);
        printf("MSSV: "); gets(mangSV[i].mssv); fflush(stdin);
        printf("Ten SV: "); gets(mangSV[i].tenSV);
        printf("Nganh Hoc: ");gets(mangSV[i].nganhHoc);
        printf("Nhap diem TB: ");scanf("%f",&mangSV[i].diemTB);
    }
	//xuất thông tin bài 1
    for ( i = 0; i < n; i++)
    {
		
        printf("\nMSSV: %3s | %6s | %6s | %3.1f",mangSV[i].mssv,mangSV[i].tenSV,mangSV[i].nganhHoc,mangSV[i].diemTB);
    }
	//sắp xếp bài 2
	    for ( i = 0; i < n; i++)
	    {
	         for ( j = 1; j < n; j++)
	         {
	             if (mangSV[i].diemTB<mangSV[j].diemTB)
	            {
	                float temp = mangSV[i].diemTB;
	                mangSV[i].diemTB=mangSV[j].diemTB;
	                mangSV[j].diemTB=temp;
	            }  
	         } 
			  
	    }
        printf("\n\n");
	    printf("Sap xep sinh vien\n");
	    for ( i = 0; i < n; i++)
	    {
	        printf("\nMSSV: %3s | %6s | %6s | %3.1f ",mangSV[i].mssv,mangSV[i].tenSV,mangSV[i].nganhHoc,mangSV[i].diemTB);
			if (mangSV[i].diemTB>=8)
	        {
	            printf("|\tHoc luc gioi.");
	        }
	        else if (mangSV[i].diemTB>=7)
	        {
	            printf("|\tHoc luc kha.");
	        }
	        else if (mangSV[i].diemTB>=5.0)
	        {
	            printf("|\tHoc luc trung binh.");
	        }
	        else
	        {
	            printf("|\tHoc luc yeu.");
	        }
        }   
	fflush(stdin);
	//tìm kiếm bài 3
    printf("\nNhap vao ma tuong ban muon tim: ");
	gets(MS);
    for	(i=0;i<n;i++)
	{
		if(strcmp(MS,mangSV[i].mssv) == 0)
		{
			printf("\nMSSV: %3s | %6s | %6s | %3.1f",mangSV[i].mssv,mangSV[i].tenSV,mangSV[i].nganhHoc,mangSV[i].diemTB);
			check++;
		}
		
	}
	if (check==0)
	{
		printf("Khong tim thay");
	}
	
}

int main()
{
    B1();
    return 0;
}