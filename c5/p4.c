/*
Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered.
*/
#include<stdio.h>

int main() {
    int limit,num,p=0,n=0,z=0;
    printf("How many numbers you want to input:: ");
    scanf("%d",&limit);
    while (limit>=1)
    {
        printf("please enter the number\n");
        scanf("%d" , &num);
        if (num>0)
            p++;
        else if (num<0)
            n++;
        else if (num==0)
            z++;   
        limit --;
    }
    printf("positive numbers=%d\nnegative number=%d\nzeroes=%d\n", p , n , z);
    return 0;
}