/*
If a five-digit number is input through the keyboard, write
a program to calculate the sum of its digits. (Hint: Use the
modulus operator %)
*/
#include<stdio.h>
#include<stdlib.h>

int getSumOfDigits(int num) {
    int sum=0, rem=0;
    num=abs(num);
    while(num!=0) {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    return sum;
}
int main() {
    int num=0;
    scanf("%d", &num);
    printf("%d", getSumOfDigits(num));
    return 0;
}