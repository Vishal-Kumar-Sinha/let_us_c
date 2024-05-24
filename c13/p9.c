#include<stdio.h>
#include <math.h>
int main() {
    int arr[10][2];
    for(int i=0;i<10;i++) {
        for(int j=0;j<2;j++)
            scanf("%d", &arr[i][j]);
    }
    float distance=0.0;
    for(int i=1;i<10;i++)
        distance+=sqrt((arr[i][0]-arr[i-1][0])*(arr[i][0]-arr[i-1][0])+(arr[i][1]-arr[i-1][1])*(arr[i][1]-arr[i-1][1]));
    printf("%0.2f\n", distance);
    return 0;
}