/*
Write a program to receive Cartesian co-ordinates (x, y)
of a point and convert them into polar co-ordinates (r, φ).
Hint: r = sqrt(x^2 + y^2) and tan^(-1) (y/x)
*/
#include<stdio.h>
#include<math.h>

void getPolar(float x, float y) {
    float r=sqrt((x*x)+(y*y));
    float t=atan(y/x);
    printf("(%0.2f, %0.2f)",r,t);
}
int main() {
    float x=0.0, y=0.0;
    scanf("%f %f",&x, &y);
    getPolar(x,y);
    return 0;
}