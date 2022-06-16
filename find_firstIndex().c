#include<stdio.h>

int find_firstIndex(char str[])
{
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<strlen(str);i++)
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

    int n=find_firstIndex(str);

    printf("%d\n",n);
    return 0;
}
