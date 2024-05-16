/*
If the lengths of three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is an isosceles, an equilateral,
a scalene or a right-angled triangle.
*/
#include<stdio.h>
#include<stdbool.h>

bool check(int a, int b, int c) {
    if((a<c && b<c && a+b>c)||(a<b && c<b && a+c>b)||(b<a && c<a && b+c>a))
        return true;
    return false;
}
void getTriangle(int a, int b, int c) {
    if(a==b && b==c)
        printf("\nEquilateral Triangle\n");
    if((a*a + b*b == c*c)||(b*b + c*c == a*a)||(a*a + c*c == b*b))
        printf("Right angled ");
    if((a==b && b!=c)||(a==c && a!=b)||(b==c && a!=b))
        printf("Isosceles ");
    if(a!=b && b!=c)
        printf("Scelene ");
    printf("Triangle\n");
}
int main() {
    int a ,b , c;
    scanf("%d %d %d",&a,&b,&c);
    if(check(a,b,c))
        getTriangle(a, b, c);
    else
        printf("Not valid triangle");
    return 0;
}