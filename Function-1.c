#include<stdio.h>
#include<conio.h>
int sum (int num1,int num2)
{
   return num1+num2;

}
int main()
{
    int a,b;
    printf("Enter the two numbers = ");
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
    printf("the sum is=%d",result);
    getch();

}
