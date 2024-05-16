/*
A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
bool check(int num) {
    num=abs(num);
    int temp=num;
    int d=floor(log10(num))+1;
    if(d!=5)
        return false;
    else {
        int rev=0, rem=0;
        while(num!=0) {
            rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        if(rev==temp)
            return true;
        else
            return false;
    }
}
int main() {
    int num=0;
    scanf("%d", &num);
    if(check(num))
        printf("equal");
    else
        printf("not");
    return 0;
}