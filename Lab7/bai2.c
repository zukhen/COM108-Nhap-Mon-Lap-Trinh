#include "stdio.h"
void login()
{
    char user[100];
    int passSys = 12345;
    int pass;
    char userSys[]="admin";
    printf("Nhap Username: ");
    scanf("%s",&user);
    printf("Nhap Password: ");
    scanf("%d",&pass);
    if (user!=userSys && pass!=passSys)
    {
      printf("Dang nhap that bai.");   
    }
    else
    {
        printf("Ban da dang nhap thanh cong.");
    }
}
int main()
{
    login();
    return 0;
}
