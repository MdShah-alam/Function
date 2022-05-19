#include<stdio.h>
int  makePositive(int n)
{
    n=-n;
    return n;
}

int main()
{
    int n=-10;
   n=makePositive(n);
    printf("%d",n);
}
