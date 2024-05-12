/*
If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three. 
*/
#include<stdio.h>

void getYoungest(int a1, int a2, int a3) {
    if(a1<a2 && a1<a3)
        printf("Ram");
    else if(a2<a1 && a2<a1)
        printf("Shyam");
    else if(a3<a1 && a3<a2)
        printf("Ajay");
    else if(a1==a2 && a1<a3)
        printf("Ram, Shyam");
    else if(a1==a3 && a1<a3)
        printf("Ram, Ajay");
    else if(a2==a3 && a2<a1)
        printf("Shyam, Ajay");
    else
        printf("all same");
}
int main() {
    int a1=0, a2=0, a3=0;
    scanf("%d %d %d", &a1, &a2, &a3);
    if(a1<0||a2<0||a3<0)
        printf("invalid age");
    else
        getYoungest(a1, a2, a3);
    return 0;
}