#include<stdio.h>
#include<math.h>
float getDistance(float *p1, float *p2) {
    return sqrt(pow((p2[0]-p1[0]),2)+pow((p2[1]-p1[1]),2));
}
float getArea(float *p1, float * p2, float * p3) {
    float d1=getDistance(p1,p2);
    float d2=getDistance(p2,p3);
    float d3=getDistance(p1,p3);
    float s=(d1+d2+d3)/2;
    return (sqrt(s*(s-d1)*(s-d2)*(s-d3)));
}
int main() {
    float p1[2], p2[2], p3[2];
    printf("p1(x y) p2(x y) p3(x y)");
    scanf("%f %f", &p1[0], &p1[1]);
    scanf("%f %f", &p2[0], &p2[1]);
    scanf("%f %f", &p3[0], &p3[1]);
    printf("\n%f",getArea(p1,p2,p3));
    return 0;
}