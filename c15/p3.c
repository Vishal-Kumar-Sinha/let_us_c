#include<stdio.h>
#include<stdlib.h>
int main() {
    char num[20];
    int sum=0;
    printf("\nEnter the 16 digit credit card number :: ");
    scanf("%s",num);
    for (int i=0;i<16;i++) {
        num[i]-=48;
        if((i%2))
            sum+=num[i];
        else {
            num[i]*=2;
            if(num[i]>9)
                num[i]-=9;
            sum+=num[i];
        }
    }
    if(!(sum%10))
        printf("\nNumber is valid.");
    else
        printf("\nNumber is invalid.");
    return 0;
}