/*
Write a program to check whether a triangle is valid or not, if three 
angles of the triangle are entered through the keyboard. A triangle 
is valid if the sum of all the three angles is equal to 180 degrees
*/
#include<stdio.h>
#include<stdbool.h>
bool isValidTriangle(int a1, int a2, int a3) {
    if(a1<0||a2<0||a3<0||a1>=180||a2>=180||a3>=180)
        return false;
    else if(a1+a2+a3==180)
        return true;
    else
        return false;
}
int main() {
    int a1=0, a2=0, a3=0;
    scanf("%d %d %d", &a1, &a2, &a3);
    if(isValidTriangle(a1, a2, a3))
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}