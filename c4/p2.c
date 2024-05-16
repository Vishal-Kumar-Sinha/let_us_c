/*
In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-Yellow- Black
 (CMYK) format, with values of C, M, Y, and K varying on a real scale
 from 0.0 to 1.0. Write a program that converts RGB color to CMYK color
 as per the following formulae:
White=Max(Red/255,Green/255, Blue/255)
Cyan = (White-Red/255)/White
Magenta = (White-Green/255)/White
Yellow = (White-Blue/255)/White
Black=1-White
Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.
*/
#include<stdio.h>
int max(int a,int b,int c) {
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else return c;
}
void convert(int r, int g, int b) {
    float w,c,m,y,k;
    w=1.0*max(r,g,b);
    c=(w - r/255)/w;
    m=(w - g/255)/w;
    y=(w - b/255)/w;
    k=1-w;
    printf("w=%0.1f, c=%0.1f, m=%0.1f, y=%0.1f, k=%0.1f",w,c,m,y,k);
}
int main() {
    int r,g,b;
    scanf("%d %d %d",&r,&g,&b);
    if(r<0||r>255||g<0||g>255||b<0||b>255)
        printf("Invalid colors");
    else convert(r,g,b);
    return 0;
}