#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "windows.h"
struct Sinhvien
{
    char ten[30];
    float diem ;
};
void B1(int tienVay){
	 int i;
	 int tienLai;
	 int tienGoc = tienVay/12;
	 int tienTra;
	 int tienCon;
	 tienCon= tienVay;
	 printf("Ky han	|	Lai Phai Tra	|	Goc Phai Tra	|	So Tien Phai Tra	|	So Tien Con Lai\n");
	 for(i=1;i<=12;i++){
	 	tienLai=tienCon*0.05;
	 	tienTra=tienGoc + tienLai;
		tienCon= tienCon- tienGoc;
		printf("%6d",i);
		printf("%19d",tienLai);
		printf("%25d",tienGoc);
		printf("%25d",tienTra);
		printf("%32d",tienCon);
		printf("\n"); 
	 }
}

void B2()
{
    float TienVay,Tientratruoc=0,laiHangthang;
    float Sotien = 5000000;
    printf("Nhap so phantram ban muon vay: ");scanf("%f",&TienVay);
    Tientratruoc=1.0-TienVay;
    laiHangthang = 0.072/12;
    int thoi_han =12;
    float Sotientratruoc= Sotien*Tientratruoc;
    Sotien=Sotien-Sotientratruoc;
    float tra_theo_thang=Sotien/thoi_han;
    printf("So tien phai tra truoc la: %.0f\n",Sotientratruoc);
    printf("So tien tra hang thang: \n");
    printf("Ky han\t\tLai Phai Tra\t\tGoc Phai Tra\t\tSo Tien Phai Tra\t\tSo Tien Con Lai\n");
    int i;
    for ( i = 1; i <=thoi_han; i++)
    {
        float Tra_Lai=Sotien * laiHangthang;
        float Tong_tat_ca=Tra_Lai+tra_theo_thang;
        Sotien=Sotien-tra_theo_thang;
        printf("%d",i);
		printf("\t\t%.2f",Tra_Lai);
		printf("\t\t%.2f",Sotientratruoc);
		printf("\t\t%.2f",Tong_tat_ca);
		printf("\t\t\t%.2f",Sotien);
		printf("\n"); 
    }
    
}
void B3()
{
	int i,j,soluong;
    float diem;
    printf("Nhap vao so luong sinh vien: ");
    scanf("%d",&soluong);
    struct Sinhvien mang[30];
    fflush(stdin);
		for ( i = 0; i < soluong; i++)
		{
			printf("Nhap ten cua sinh vien thu %d: ",i+1);
			gets(mang[i].ten);
            fflush(stdin); 
            printf("Nhap diem cua sinh vien %d: ",i+1);
            scanf("%f",&mang[i].diem); fflush(stdin); 
        }
	     for ( i = 0; i < soluong; i++)
	     {
	         for ( j = 1; j < soluong; j++)
	         {
	             if (mang[i].diem<mang[j].diem)
	             {
	                float temp = mang[i].diem;
	                mang[i].diem=mang[j].diem;
	                mang[j].diem=temp;
	             }  
	         }  
	     }
	     printf("Sap xep sinh vien:\nHoTen \t\t\t\t Diem\t\t\tHoc Luc");
	     for ( i = 0; i < soluong; i++)
	     {
	        printf("\n%d: %s\t\t",i+1,mang[i].ten);
	        printf("\t\t %.1f",mang[i].diem);
	        if (mang[i].diem>=9)
	        {
	            printf("\t\t\tHoc luc xuat sac.");
	        }
	        else if (mang[i].diem>=8)
	        {
	            printf("\t\t\tHoc luc gioi.");
	        }
	        else if (mang[i].diem>=6.5)
	        {
	            printf("\t\t\tHoc luc kha.");
	        }
	        else if (mang[i].diem>=5.0)
	        {
	            printf("\t\t\tHoc luc trung binh.");
	        }
	        else
	        {
	            printf("\t\t\tHoc luc yeu.");
	        }
	     }      
}
void B4()
{
    int a,b,random1,random2,count;
     do
    {
    printf("Nhap vao so thu 1: ");scanf("%d",&a);
    printf("Nhap vao so thu 2: ");scanf("%d",&b);
    count = a<1||a>15||b<1||b>15;
    if (count !=0)
    {
        printf("Vui long nhap so trong khoang[1-15]\n ");
    }
    } while ( count !=0);
    srand(time(0));
    random1 = 1+rand()%15;
    random2 = 1+rand()%15;
    if ((a==random1&&b==random2)||(a==random2&&b==random1))
    {
        printf("Ban da trung giai nhat");
    }
    else if (a==random1||a==random2||b==random1||b==random2)
    {
      printf("Ban da trung giai nhi");
    }
    else
    {
        printf("Chuc ban may man lan sau");
    }
}
void B5()
{
    int tuso1, mauso1;
    int tuso2, mauso2;
    int tuso4, mauso4;
    int tuso5, mauso5;
    int tuso6, mauso6;
    int tuso7, mauso7;
    int uc;
    int min, i, kq;
    printf("Moi nhap tu so cua phan so thu nhat: ");
    scanf("%d", &tuso1);
    printf("Moi nhap mau so cua phan so thu nhat: ");
    scanf("%d", &mauso1);
    printf("Moi nhap tu so cua phan so thu hai: ");
    scanf("%d", &tuso2);
    printf("Moi nhap mau so cua phan so thu hai: ");
    scanf("%d", &mauso2);
    if(mauso1 == 0 || mauso2 == 0)
    {
        printf("VUI LONG NHAP MAU SO KHAC 0");
    }
    else
    {
        printf("Phan so thu nhat la: %d/%d\n", tuso1, mauso1);
        printf("Phan so thu hai la: %d/%d\n", tuso2, mauso2);
        tuso4 = (tuso1*mauso2)+(tuso2*mauso1);
        mauso4 = mauso1*mauso2;
        min = tuso4;
        if(min>mauso4)
        {
            min = mauso4;
        }
            for(i = min; i>=1; i--)
            {
                if(tuso4%i==0&&mauso4%i==0)
                {
                    kq = i;
                    break;
                }
            }
            tuso4 = tuso4 / kq;
            mauso4 = mauso4 / kq;
            printf("Tong cua hai phan so: %d/%d + %d/%d = %d/%d\n", tuso1, mauso1, tuso2, mauso2, tuso4, mauso4);

        tuso5 = (tuso1*mauso2)-(tuso2*mauso1);
        mauso5 = mauso1*mauso2;
        min = tuso5;
        if(min>mauso5)
        {
            min = mauso5;
        }
        for(i=min;i>=1;i--)
        {
            if(tuso5%i==0&&mauso5%i==0)
            {
                kq = i;
                break;
            }
        }
        tuso5 = tuso5/kq;
        mauso5 = mauso5/kq;
        printf("Hieu cua hai phan so: %d/%d - %d/%d = %d/%d\n", tuso1, mauso1, tuso2, mauso2, tuso5, mauso5);

        tuso6 = tuso1*tuso2;
        mauso6 = mauso1*mauso2;
        min = tuso6;
        if(min>mauso6)
        {
            min = mauso6;
        }
        for(i=min;i>=1;i--)
        {
            if(tuso6%i==0&&mauso6%i==0)
            {
                kq = i;
                break;
            }
        }
        tuso6 = tuso6/kq;
        mauso6 = mauso6/kq;
        printf("Tich cua hai phan so: %d/%d * %d/%d = %d/%d\n", tuso1, mauso1, tuso2, mauso2, tuso6, mauso6);
        
        tuso7 = tuso1*mauso2;
        mauso7 = mauso1*tuso2;
        min = tuso7;
        if(min>mauso7)
        {
            min = mauso7;
        }
        for(i=min;i>=1;i--)
        {
            if(tuso7%i==0&&mauso7%i==0)
            {
                kq = i;
                break;
            }
        }
        tuso7 = tuso7/kq;
        mauso7 = mauso7/kq;
        printf("Thuong cua hai phan so: %d/%d / %d/%d = %d/%d", tuso1, mauso1, tuso2, mauso2, tuso7, mauso7);
    }
}
int main()
{
    
        int Choice,tienVay;
        do
        {
            printf("\n\nBai ASSIGMENT So 2.");
            printf("\n1: Tinh lai suat ngan hang vay tra gop.");
            printf("\n2: Vay tien mua xe.");
            printf("\n3: Sap xep thong tin sinh vien.");
            printf("\n4: FPOLY-LOTT.");
            printf("\n5: Tinh toan phan so.");
            printf("\n0: Thoat.");
            printf("\nMoi ban nhap lua chon: ");
            scanf("%d",&Choice);
            switch (Choice)
            {
            case 1:
                system("cls");
                printf("Ban da chon chuc nang 1: \n");
                printf("CHUC NANG: Tinh lai suat ngan hang vay tra gop.\n");
                printf("Nhap vao so tien muon vay: ");
                scanf("%d",&tienVay);
                B1(tienVay);
                break;
            case 2:
                system("cls");
                printf("Ban da chon chuc nang 2: \n");
                printf("CHUC NANG: Vay tien mua xe.\n");
                B2();
                break;
            case 3:
                system("cls");
                printf("Ban da chon chuc nang 3: \n");
                printf("CHUC NANG: Sap xep thong tin sinh vien.\n");
                B3();
                break;
            case 4:
                system("cls");
                printf("Ban da chon chuc nang 4: \n");
                printf("CHUC NANG: FPOLY-LOTT.\n");
                B4();
            case 5:
                system("cls");
                printf("Ban da chon chuc nang 5: \n");
                printf("CHUC NANG: Tinh toan phan so.\n");
                B5();
            case 0:
                    printf("\nCAM ON BAN DA SU DUNG.");
                break;
            }
         
        } while (Choice!=0);
        
        return 0;
}
