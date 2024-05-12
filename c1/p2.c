/*
The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle.
*/
#include<stdio.h>

float getRectanglePerimeter(float l, float b) {
    return (2*(l+b));
}
float getRectangleArea(float l, float b) {
    return (l*b);
}
float getCircleCircumferance(float r) {
    return (2*3.14*r);
}
float getCircleArea(float r) {
    return (3.14*r*r);
}
int main() {
    float l=0.0, b=0.0, r=0.0;
    scanf("%f %f %f", &l, &b, &r);
    printf("%0.2f\n%0.2f\n%0.2f\n%0.2f", getRectanglePerimeter(l,b), getRectangleArea(l,b), getCircleCircumferance(r), getCircleArea(r));
    return 0;
}