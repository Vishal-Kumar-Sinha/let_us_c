/*
 Write a program to receive an integer and find its octal equivalent. 
(Hint: To obtain octal equivalent of an integer, divide it continuously 
by 8 till dividend doesn’t become zero, then write the remainders 
obtained in reverse direction.)
*/
#include<stdio.h>
#include<math.h>

int getOctal(int num) {
    int c=1,res=0,rem=0;
    while(num!=0) {
        rem=num%8;   
        res+=rem*c;
        c*=10;
        num/=8;
    }
    return res;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",getOctal(n));
    return 0;
}