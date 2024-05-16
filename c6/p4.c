/**/
#include<stdio.h>
#include<math.h>
int main(){
    float x;
    scanf("%f",&x);
    float sum = (x-1)/x;
    for(int i=2;i<=7;i++){
        sum += 0.5*pow((x-1)/x,i);
    }
    printf("%0.2f", sum);
    return 0;
}