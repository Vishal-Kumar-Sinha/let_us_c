#include <stdio.h>
void insertion(int *arr, int n) {
    int key,j;
    for(int i=1;i<n;i++) {
        key=arr[i];
        j=i-1;
        while(key<arr[j] && j>=0) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("\nSorted array:: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertion(a,n);
    return 0;
}
