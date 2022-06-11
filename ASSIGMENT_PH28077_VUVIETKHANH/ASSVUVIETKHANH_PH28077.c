#include"stdio.h"
#include"math.h"
const float three_hours = 150000;
const float Sotien = 500000;
const int thoi_han =12;
void SN(float x)
    {
        int check = 0;
        if (x == (int) x)
            {
            check = 1;
            }
        else
            {
                check = -1;
            }
        if (check > 0 )
            {
                printf("%.2f la so nguyen.",x);
            }
        else
            {
                printf("%.2f la so thuc.",x);
            } 
    }
void SNT(int x)
    {
        int count = 0,i;
                for (i = 2; i <=sqrt(x); i++)
                    {
                        if (x % i==0)
                        {
                            count++; 
                        }
                
                    }
                        if (count == 0) 
                        {
                            printf("\n%d la so nguyen to.",x);
                        }
                        else
                        {
                            printf("\n%d khong phai la so nguyen to.",x);
                        }
                
    }      
void SCP(int x)
    {
        int i,count =0;
                 for (i = 0; i <= x; i++)
                    {
                        if (i*i == x)
                        {
                            count++;
                        }
                    }
                    if (count != 0) 
                        {
                            printf("\n%d la so chinh phuong.",x);
                        }
                        else
                        {
                            printf("\n%d khong phai la so chinh phuong.",x);
                        }  
    }
void UC_BC(int z, int y)
    {
        int tich = z*y;
        while (z!=y)
        {
            if (z>y)
            {
                z-=y;
            }
            else
            {
                y-=z;
            }
        } 
        printf("UCLN: %d",z);
        printf("\nBCNN: %d",y);     
    }
void Karaoke(int Timestart, int timeEnd)
  {
    int Sum = timeEnd - Timestart;
    float amout = 0;
    if(Sum <= 3)
    {
      amout = Sum * three_hours;
      printf("Gia tien can thanh toan la: %.0f",amout);
      printf("vnđ");
    }
    else
    {
      amout = 3*three_hours + (Sum - 3) *three_hours -(three_hours * 0.3);
      printf("Gia tien cho %d gio: %.0f",Sum,amout);
      printf("vnd");
    }
  }
void Tiendien(int kWH)
    {
     float Bac1,Bac2,Bac3,Bac4,Bac5,Bac6;
        if (kWH > 0 && kWH <= 50)
        {
            Bac1 = kWH * 1.678;
            printf("so tien can phai dong la: %.1f",Bac1);
            printf("vnd");
        }
        else if (kWH > 51 && kWH <= 100)
        {
            Bac2 = (kWH-50)*1.734 + 50*1.678;
            printf("so tien can phai dong la: %.1f",Bac2);
            printf("vnd");
        }
        else if (kWH > 101 && kWH <= 200)
        {
            Bac3 = (kWH-100)*2.014 + 50*1.734 + 50*1.678;
            printf("so tien can phai dong la: %.1f",Bac3);
            printf("vnd");
        }
        else if (kWH >201 && kWH <= 300)
        {
            Bac4 = (kWH-200)*2.536 + 100*2014 + 50*1734 + 50*1678;
            printf("so tien can phai dong la: %.1f",Bac4);
            printf("vnd");
        }
        else if (kWH > 301 && kWH <= 400)
        {
            Bac5 = (kWH-300)*2384 + 100*2.536 + 100*2.014 + 50 *1.734 + 50 * 1.678;
            printf("so tien can phai dong la: %.1f",Bac5);
            printf("vnd");
        }
        else
        {
            Bac6 = (kWH-400)*2.927 + 100*2384 + 100*2.536 + 100*2.014 + 50 *1.734 + 50 * 1.678;
            printf("so tien can phai dong la: %.1f",Bac6);
            printf("vnd");
        }
    }
void doitien(int Sotien)
    {
        int menh_gia[]={500,200,100,50,20,10,5,2,1};
        int i,Totien;
        for ( i = 0; i <9; i++)
        {
           Totien= Sotien/menh_gia[i];
           if(Totien != 0)
           {
           	printf("\nco %d to %d",Totien,menh_gia[i]);
		   }
           Sotien = Sotien - Totien * menh_gia[i];
        }
    }
struct Sinhvien
{
    char ten[30];
    float diem ;
};
void B6(int tienVay){
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
void B7()
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
void B8()
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
void B9()
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
void B10()
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
    int Choice = 0,z,y,Time_start, timeEnd,kWH,Sotien =0;
    float x;
    do
    {   
        printf("\n\nBai ASSIGMENT So 1.");
        printf("\n1: Kiem tra so nguyen.");
        printf("\n2: Tim Uoc so chung va Boi so chung cua 2 so.");
        printf("\n3: Chuong trinh tinh tien cho quan Karaoke.");
        printf("\n4: Tinh tien dien.");
        printf("\n5: Chuc nang doi tien.");
        printf("\n0: Thoat Chuong Trinh.");
        printf("\nMoi ban nhap lua chon: ");
        scanf("%d",&Choice);
        switch(Choice)
        {
            case 1:
                printf("Nhap vao 1 so: ");
                scanf("%f",&x);
                SN(x);
                SNT(x);
                SCP(x);
            break;
            case 2:
                printf("Nhap vao 2 so: ");
                scanf("%d%d",&z,&y);
                UC_BC(z,y);
            break;
            case 3: 
                printf("Nhap vao gio bat dau va gio ket thuc: ");
                scanf("%d%d",&Time_start,&timeEnd);
                Karaoke(Time_start,timeEnd);
            break;
            case 4:
                printf("Nhap vao so dien su dung: ");
                scanf("%d",&kWH);
                Tiendien(kWH);
            break;
            case 5: 
                printf("Nhap vao menh gia tien: ");
                scanf("%d",&Sotien);
	            doitien(Sotien);
            break;
            case 6:
                
            case
            case 0:
                printf("CAM ON BAN DA SU DUNG.");
            break;

        }
    } while (Choice != 0);
    return 0;
}