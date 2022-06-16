#include<stdio.h>

int n;
int* take_input(int ar[])
{

    scanf("%d",&n);
    int *a = (int*) malloc (n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        ar[i]=a[i];
    }
    return ar;
}

int main()
{
    int *arr = (int*) malloc (5* sizeof(int));
    take_input (arr);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
