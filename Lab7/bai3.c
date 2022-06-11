#include "stdio.h"
#include<string.h>
void sapxep()
{
    char s[5][20],t[20];
    int i,j;
    printf("Nhap 5 chuoi tu ban phim: ");
    for ( i = 0; i < 5; i++)
    {
        gets(s[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
           if (strcmp(s[j-1],s[j])>0)
           {
                strcpy(t, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], t);
           }
        }
    }
     printf("\nSap xep thu tu cua cac chuoi:");
    for (i = 0; i < 5; i++)
    {
      printf("%d\n%s",i+1, s[i]);
    }
}
int main()
{
    sapxep();
    return 0;
}
