/**/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,n,r,q,a;
    int i=1;
    while(i<=10)
    {
        printf("Set: %d\n",i);
        printf("Enter Principle::");
        scanf("%f",&p);
        printf("Enter Rate::");
        scanf("%f",&r);
        printf("Enter Time(in year)::");
        scanf("%f",&n);
        printf("Enter Compounding::");
        scanf("%f",&q);
        a = p*(pow((1+r/q),n*q));
        printf("Amount: %.2f\n",a);
        i++;
    }
    return 0;
}