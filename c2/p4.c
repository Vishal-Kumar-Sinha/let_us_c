/*
Wind-chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill temperature is always lower than the air temperature, and
is calculated as per the following formula:
wcf = 35.74 +0.6215t + (0.4275t - 35.75) * v0.16
where t is temperature and v is wind velocity. Write a program to receive
values of t and v and calculate wind-chill factor (wcf).
*/
#include<stdio.h>
float getWCF(float t, float v) {
    return (3.74+(0.6215*t)+(((0.4275*t)-35.75)*(0.16*v)));
}
int main() {
    float t=0.0, v=0.0;
    scanf("%f %f", &t, &v);
    printf("%0.2f", getWCF(t,v));
    return 0;
}