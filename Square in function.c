#include<stdio.h>
#include<conio.h>
int square(int num)
{
    return num*num;
}
int main()
{
    int a;
    printf("Enter the value of a=");
    scanf("%d",&a);
    int result=square(a);
    printf("the square=%d",result);
    getch();
}
