#include<stdio.h>
#include<stdbool.h>
bool checkLeapyear(int year) {
    if(year%400==0)
        return true;
    else if(year%100!=0 && year%4==0)
        return true;
    return false;
}
int main() {
    int yr;
    scanf("%d",&yr);
    if(checkLeapyear(yr))
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}