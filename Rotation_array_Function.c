#include<stdio.h>
void rotate(int n,int a[])
{
        int temp=a[0];
        for(int i=0; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
}

void rotate_by_k(int n,int a[],int k)
{
    k=k%n;
    for(int i=0;i<k;i++)
    {
        rotate(n,a);
        printf("Iteration %d=",i+1);
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    rotate_by_k(n,a,k);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
