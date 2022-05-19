#include<stdio.h>
void turncate(char s[],int k)
{
    int len=strlen(s);
    if(k<0 || k>len)
        return ;
    else
        s[k]='\0';
}
int main()
{
    char s[100];
    gets(s);

    int k;
    scanf("%d",&k);
    turncate(s,k);

    printf("%s",s);
}
/** s[]=shahalam;
    k=4;
    shah;
*/
