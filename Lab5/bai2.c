#include "stdio.h"
int checkYear(int year)
{
    int flag = 0;
    if (year % 400 == 0 || ((year %4 ==0)&&( year %100 !=0)))
    {
        printf("%d la nam nhuan",year);
    }
    else
	{
        printf("%d la nam khong nhuan",year);
	}
    return flag;
}
int main()
{	
	int input;
	printf("Nhap so nam ban muon kiem tra: ");
	scanf("%d",&input);
	input = checkYear(input);
	return 0;
}
