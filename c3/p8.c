/*
Given a point (x, y), write a program to find out if it lies on X-axis, Y-axis or origin.
*/
#include<stdio.h>

void getLocation(int x, int y) {
    if(x==0 && y!=0)
        printf("Y-axis");
    else if(y==0 && x!=0)
        printf("X-axis");
    else if(x==0 && y==0)
        printf("Origin");
    else
        printf("None");
}
int main() {
    int x=0, y=0;
    scanf("%d %d", &x, &y);
    getLocation(x, y);
    return 0;
}