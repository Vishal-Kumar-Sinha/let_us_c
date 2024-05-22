#include<stdio.h>
#include<stdlib.h>
int main() {
    char isbn[15];
    int sum=0;
    printf("\nEnter 10 digit ISBN number :: ");
    gets(isbn);
    for(int i=0;i<10;i++) {
        isbn[i]-=48;
        sum+=((i+1)*isbn[i]);
    }
    if(sum%11!=0) /*If not divisble by 11*/
        puts("\nISBN number is wrong.");
    else
        puts("\nISBN number is valid.");
    return 0;
}