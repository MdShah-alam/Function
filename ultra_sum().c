#include<stdio.h>

void ultra_sum(int* sum,int *multi,int *a,int *b)
{
    *sum=*a+*b;
    *multi=*a * *b;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0,multi=0;
    ultra_sum(&sum,&multi,&a,&b);

    printf("sum =%d \nmulti= %d\n",sum,multi);
}
