#include<stdio.h>
#include<conio.h>
void display(char s1[])
{
    int i=0;

    while(i<=8)
    {
        printf(" %c \n",s1[i]);
        i++;
    }
}
int main()
{
char str[]="shahalam";
display(str);
getch();

}
