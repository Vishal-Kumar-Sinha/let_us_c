#include<stdio.h>
#include<math.h>
float getArea(float a,float b,float angle) {
    return (0.5*a*b*sin(angle));
}
int main() {
    float a[]={137.4,155.2,149.3,160.0,155.6,149.7};
    float b[]={80.9,92.62,97.93,100.25,68.95,120.0};
    float angle[]={0.78,0.89,1.35,9.00,1.25,1.75};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) {
        printf("%f  ",getArea(a[i],b[i],angle[i]));
    }
    return 0;
}