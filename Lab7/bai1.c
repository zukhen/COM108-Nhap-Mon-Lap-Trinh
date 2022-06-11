#include "stdio.h"
void nhap_chuoi()
{
    char chuoi[100];
    printf("xin moi nhap vao chuoi: ");
    gets(chuoi);
    int i=0,n_am=0,p_am=0;
    while (chuoi[i++]!='\0')
    {
        if (chuoi[i]=='a'||chuoi[i]=='i'||chuoi[i]=='e'||chuoi[i]=='o'||chuoi[i]=='u')
        {
           n_am++;
        }
        else
        {
            p_am++;
        }          
    }
    printf("Chuoi '%s' co chua %d nguyen am va %d phu am.",chuoi,n_am,p_am);
    
}
int main()
{
    nhap_chuoi();
    return 0;
}