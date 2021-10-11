#include<stdio.h>
#include<conio.h>
int main ()
{
    clrscr();
    char A[]="level" ;
    char B[6] ;
    int i,j;
    for (i=0; A[i] != '\0' ; i++)
    {

    }
    for (i=i-1,j=0; A[i] != '\0' ; i--,j++)
    {
        B[j]=A[i];
    }
    B[j]= '\0';
    printf("%s",B);

    for (i=0,j=0; A[i] != '\0' && B[j] != '\0' ; i++,j++ )
    {
        if(A[i]!=B[j])
            printf("Unequal");
        else
            printf("equal and hence string is palindrome");

    }


}
