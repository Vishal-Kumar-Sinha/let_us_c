/*
Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 
is greater than its perimeter.
*/
#include<stdio.h>
#include<stdbool.h>

bool check(float l, float b) {
    return (((l*b)>2*(l+b))?true:false);
}
int main() {
    float l=0.0, b=0.0;
    scanf("%f %f", &l, &b);
    if(check(l,b))
        printf("Greater");
    else
        printf("Not Greater");
    return 0;
}