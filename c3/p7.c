/*
Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checkDistance(int cx, int cy, int r, int x, int y) {
    int d=sqrt(pow((x-cx),2)+pow((y-cy),2));
    return (d<=r?true:false);
}
int main() {
    int cx=0, cy=0, r=0, x=0, y=0;
    printf("Enter center co-ordinates (x y):: ");
    scanf("%d %d", &cx, &cy);
    printf("\nEnter radius:: ");
    scanf("%d", &r);
    printf("\nEnter point (x y):: ");
    scanf("%d %d", &x, &y);
    if(checkDistance(cx, cy, r, x, y))
        printf("\nInside");
    else
        printf("\nOutside");
    return 0;
}