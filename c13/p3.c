#include<stdio.h>
#include<limits.h>
int* getSmallest(int*a) {
    int miniele=INT_MAX;
    for(int i=0;i<25;i++)
        miniele=(a[i]<miniele)?a[i]:miniele;
    return miniele;
}
int main() {
    int a[25];
    for(int i=0;i<25;i++) 
        scanf("%d",&a[i]);
    printf("%d", getSmallest(a));
    return 0;
}