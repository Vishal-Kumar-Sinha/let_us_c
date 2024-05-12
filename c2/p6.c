/*
Two numbers are input through the keyboard into
two locations C and D. Write a program to
interchange the contents of C and D.
*/
#include<stdio.h>

void swap(const void*a, const void*b) {
    const void*temp=a;
    a=b;
    b=temp;
}
int main() {
    float C=0.0, D=0.0;
    scanf("%f %f", &C, &D);
    printf("Before swapping:: C=%f,D=%f\n", C, D);
    swap(&C, &D);
    printf("After swapping:: C=%f,D=%f", C, D);
    return 0;
}