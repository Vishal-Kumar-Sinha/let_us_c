#include<stdio.h>
#include<math.h>
float mean(int*a) {
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=a[i];
    }
    return (sum*1.0)/n;
}
float getsd(float a,int n,float m) {
    return (sqrt(pow((a-m),2))/n);
}
int main() {
    int arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float m=mean(arr);
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("mean=%f\n",m);
    for(int i=0;i<n;i++)
        printf("%f ",getsd(arr[i],n,m));
    return 0;
}