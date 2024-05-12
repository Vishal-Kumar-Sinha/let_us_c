/*
Temperature of a city in Fahrenheit degrees is input through the 
keyboard.  Write  a  program  to  convert  this  temperature  into 
Centigrade degrees.
*/
#include<stdio.h>
float getTemperature(float Fahrenheit) {
    return (5*(Fahrenheit-32)/9);
}
int main() {
    float F=0.0;
    scanf("%f",&F);
    printf("%0.2f 'C", getTemperature(F));
    return 0;
}