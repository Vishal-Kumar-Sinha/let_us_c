/*
Write a program to find the range of a set of numbers entered 
through the keyboard. Range is the difference between the smallest 
and biggest number in the list.
*/
#include<stdio.h>
#include<limits.h>
int main() {
    int maxi=INT_MIN,mini=INT_MAX,num,limit;
    printf("how many numbers you want to input:: ");
    scanf("%d",&limit);
    while( limit>0) {
        printf("please enter the number:: ");
        scanf("%d",&num );
        if(num<mini)
            mini = num;
        if(num>maxi)
            maxi = num;
        limit--;
    }
    printf("%d",maxi-mini);
    return 0;
}