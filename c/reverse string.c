#include<stdio.h>

int main()
{
    char name[]="Prince" ;
    int i,j;
    char t;
    for (j=0; name[j] != '\0' ; j++)
    {

    }
    for(i=0,j=j-1; i<j ; i++,j--)
    {
        t=name[i];
        name[i]=name[j];
        name[j]=t;
    }
    printf("%s", name);

}
