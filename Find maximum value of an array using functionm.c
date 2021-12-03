#include<stdio.h>
#include<conio.h>
void maximun(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int max=a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("the maximum number is=%d",max);
}
int main()
{
    int A[5]={5,3,6,8,4 };
    maximun(A);
    getch();
}
