#include<stdio.h>
int main()
{
    int *ptr;
    char str[]="Hello apple";
    char *first=str;
    char *ch=strchr(str,'');
    printf("%p\n%lld",ch,*ch);
}
