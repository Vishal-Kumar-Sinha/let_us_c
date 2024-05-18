#include<stdio.h>
void getWeight(float num) {
    printf("%f Ton\n",num/1000);
    printf("%f pounds",num*2.20462262);
}
int main() {
    float n;
    scanf("%f",&n);
    getWeight(n);
    return 0;
}