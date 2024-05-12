/*
According to Gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year.
*/
#include<stdio.h>
int getDay(int year) {
    //basic year is chosen as the least year which user can enter through the keyboard where it should be Monday on 01th of January
    int basic_year=2001, leap_year, remaining_year, total_days;
    year = (year-1)-basic_year; //we are calculating the total years between basic year and input year
    //Now calculate the leap years
    leap_year = year/4;
    //calculate the year which are not leap years
    remaining_year = year - leap_year;
    //calculate total days present in all years
    //remaining years are not leap year so total days in single year will be 365
    //But in leap year we have 366 days in a single year
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