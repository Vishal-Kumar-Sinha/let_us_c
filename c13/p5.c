#include<stdio.h>
int* modify(int*arr,int n) {
    for(int i=0;i<n;i++)
        arr[i]*=3;
    return arr;
}
int main() {
    int arr[10];
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    int*res=modify(arr,10);
    for(int i=0;i<10;i++)
        printf("%d ",res[i]);
    return 0;
}