/*
The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms)
to the square of the height (in meters). Write a program that receives weight and
height, calculates the BMI, and reports the BMI category as per the following table:
*/
#include<stdio.h>
float calculateBMI(float h, float w) {
     return w/(h*h);
}
void bmicategory(float h, float w) {
    float bmi=calculateBMI(h,w);
    if(bmi<15)
        printf("Starvation");
    else if(bmi>=15.1 && bmi<=17.5)
        printf("Anorexic");
    else if(bmi>=17.6 && bmi<=18.5)
        printf("Underweight");
    else if(bmi>=18.6 && bmi<=24.9)
        printf("Ideal");
    else if(bmi>=25 && bmi<=25.9)
        printf("Overweight");
    else if(bmi>=30 && bmi<=30.9)
        printf("Obese");
    else if(bmi>=40)
        printf("Morbidly Obese");
}
int main() {
    float h,w;
    scanf("%f %f",&h,&w);
    bmicategory(h,w);
    return 0;
}