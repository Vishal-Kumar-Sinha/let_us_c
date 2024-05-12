 /*
 Write a program to receive values of latitude (L1, L2) and
 longitude (G1, G2), in degrees, of two places on the earth
 and output the distance (D) between them in nautical miles.
 The formula for distance in nautical miles is:
 D = 3963 cos^(-1) (sin L1 sin L2 + cos L1 cos L2 * cos (G2-G1))
 */
#include<stdio.h>
#include<math.h>

float getDistance(float l1, float l2, float g1, float g2) {
    return (3963*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2) * cos(g2-g1)));
}
int main() {
    float l1=0.0, l2=0.0, g1=0.0, g2=0.0;
    scanf("%f %f %f %f", &l1, &l2, &g1, &g2);
    printf("%0.2f", getDistance(l1, l2, g1, g2));
    return 0;
}