#include<stdio.h>
#include<conio.h>
void factorial(int a)

{
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);

}
int main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    factorial(n);
    getch();
}
