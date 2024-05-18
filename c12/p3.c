#include<stdio.h>
#include"interest.h"
int main() {
    float p,t,r;
    scanf("%f %f %f",&p,&t,&r);
    printf("%0.2f\n%0.2f",SI(p,t,r),AMOUNT(SI(p,t,r),p));
    return 0;
}