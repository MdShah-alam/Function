#include<stdio.h>
#include<conio.h>
#include<math.h>
void calculate(double base,double exp)
{
   double result = pow(base,exp);
    printf("%.2lf",result);
}
int main()
{


    double base,exp;
    printf("Enter the base=");
    scanf("%lf",&base);
    printf("Enter the exponent=");
    scanf("%lf",&exp);
    calculate(base,exp);


    getch();
}
