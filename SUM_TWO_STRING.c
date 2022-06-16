#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];
    char sumstr[21];

    scanf("%s %s",str1,str2);

    strrev(str1);
    strrev(str2);

    printf("%s\n",str1);
    printf("%s\n",str2);

    int k=0,i=0,j=0,hate=0;

    while(i<strlen(str1)&&j<strlen(str2))
    {
        int sum=(str1[i]-'0')+(str2[j]-'0')+hate;
        sumstr[k]=sum%10+'0';
        hate=sum/10;
        j++;
        i++;
        k++;
    }

    while(i<strlen(str1))
    {
        int sum=(str1[i]-'0')+hate;
        sumstr[k]=sum%10+'0';
        hate=sum/10;
        i++;
        k++;
    }

    while(j<strlen(str2))
    {
        int sum=(str2[j]-'0')+hate;
        sumstr[k]=sum%10+'0';
        hate=sum/10;
        j++;
        k++;
    }

    if(hate>0)
    {
        sumstr[k]=hate+'0';
        k++;
        sumstr[k]='\0';
    }
    else
        sumstr[k]='\0';

    strrev(sumstr);
    printf("%s\n",sumstr);
}
