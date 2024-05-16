/*
If value of an angle is input through the keyboard,
write a program to print all its Trigonometric ratios.
*/
#include<stdio.h>
#include<math.h>
void getTrigonometricRatios(float angle) {
    printf("sin(%f) = %f\ncos(%f) = %f\ntan(%f) = %f\ncosec(%f) = %f\nsec(%f) = %f\ncot(%f) = %f\n", angle, sin(angle), angle, cos(angle), angle, tan(angle), angle, 1/sin(angle), angle, 1/cos(angle), angle, 1/tan(angle));
}
int main() {
    float angle=0.0;
    scanf("%f", &angle);
    getTrigonometricRatios(angle);
    return 0;
}