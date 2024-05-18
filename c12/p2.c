#include<stdio.h>
#define MEAN(a,b) ((a+b)/2)
#define ABS(a) ((a<0)?(-1*a):a)
#define ISUPPER(x) ((x>=65 && x<=90)?1:0)
#define TOLOWER(x) ((ISUPPER(x)==1)?(x+32):x)
int main() {
    float a,b,c;
    char d;
    scanf("%f %f %f %c",&a,&b,&c,&d);
    printf("%0.2f\n%0.2f\n%c\n",MEAN(a,b),ABS(c),TOLOWER(d));
    return 0;
}