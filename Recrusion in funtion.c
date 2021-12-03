#include<stdio.h>
#include<conio.h>
int fact(int r)
{

    if(r==1)
       return 1;
    else
       return r*fact(r-1);
}
int main()
{
    int n;
    printf("Enter the value n=");
    scanf("%d",&n);
    int result= fact(n);
    printf("Factorial of n is= %d",result);
    getch();
}
