/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
check if the three points fall on one straight line. 
*/
#include<stdio.h>
#include<stdbool.h>

bool check(int x1, int y1, int x2, int y2, int x3, int y3) {
    float m1=(y2-y1)*1.0/(x2-x1), m2=(y3-y2)*1.0/(x3-x2);
    if(m1==m2)
        return true;
    return false;
}
int main() {
    int x1=0, x2=0, x3=0, y1=0, y2=0, y3=0;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if(check(x1,y1,x2,y2,x3,y3))
        printf("collinear");
    else
        printf("non-collinear");
    return 0;
}