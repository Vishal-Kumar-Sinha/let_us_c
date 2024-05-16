/*
According to Gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year.
*/
#include<stdio.h>
int getDay(int year) {
    int basic_year=2001, leap_year, remaining_year, total_days;
    year = (year-1)-basic_year;
    leap_year = year/4;
    remaining_year = year - leap_year;
    total_days = (remaining_year*365) + (leap_year*366) + 1;
    return (total_days%7);
}
int main() {
    int year=0, day=0;
    scanf("%d", &year);
    //Find the actual day
    day = getDay(year);
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}