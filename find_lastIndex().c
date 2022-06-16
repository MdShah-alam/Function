#include<stdio.h>

int find_lastIndex(char str[])
{
    char ch;
    scanf("%c",&ch);
    int n=strlen(str)-1;
    for(int i=n;i>=0;i--)
    {
        if(ch==str[i])
            return i;
    }
    return -1;
}

int main()
{
    char str[20];
    gets(str);

    int n=find_lastIndex(str);

    printf("%d\n",n);
    return 0;
}
