/*
Write a program to find the absolute value of a number entered 
through the keyboard.
*/
#include<stdio.h>
#include<stdlib.h>

int getAbsolute(int num) {
    return (abs(num));
}
int main() {
    int num=0;
    scanf("%d", &num);
    printf("%d", getAbsolute(num));
    return 0;
}