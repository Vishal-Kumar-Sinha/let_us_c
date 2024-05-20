#include<stdio.h>
#include<stdbool.h>
#define CHECK(a,b) (a==b?1:0)
bool checkarray(int*arr) {
    for(int i=0;i<n/2;i++) {
        if(CHECK(arr[i],arr[n-i-1])!=1)
            return false;
    }
    return true;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(checkarray(arr))
        printf("True");
    else
        printf("False");
    return 0;  
}