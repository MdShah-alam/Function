#include<stdio.h>
int main()
{
    const int n=20;
  // int* const pn=&n;//address constant,value variable
    //const int *pn=&n;//value constant ,address variable
    const int* const pn=&n;//address and value both are constant
    printf("address =%d , value %d\n",pn,n);

   /** int m=100;
    pn=&m;
    printf("address =%d , value %d",pn,m);*/
}
