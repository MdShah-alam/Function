#include<stdio.h>

void swap(int* a, int* b)
{
    int d,e;
    scanf("%d %d",&d,&e);

    int *ptr1=&d;
    int *ptr2=&e;
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    *a=*ptr1;
    *b=*ptr2;
}
int main()
{
    int a,b;
    swap(&a,&b);
    printf("a =%d \nb =%d",a,b);
}
