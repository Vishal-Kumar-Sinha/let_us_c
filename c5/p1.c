/*
Write a program to print all the ASCII values and their equivalent 
characters using a while loop. The ASCII values vary from 0 to 255. 
*/
#include<stdio.h>
void ascii() {
    int i=0;
    printf("ascii->chars\n==============\n");
    while(i<=255) {
        printf("%d->%c\n",i,(char)i);
        i++;
    }
}
int main() {
    ascii();
    return 0;
}