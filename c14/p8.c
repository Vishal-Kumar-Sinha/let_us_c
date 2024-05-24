#include<stdio.h>
void leftShift2(int*a) {
    int temp1=a[0],temp2=a[1];
    for(int i=0;i<3;i++) {
        a[i]=a[i+2];
    }
    a[3]=temp1;
    a[4]=temp2;
}
void print(int m[4][5]) {
    for(int i=0;i<4;i++) {
        for(int j=0;j<5;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
}
int main() {
    int a[4][5];
    for(int i=0;i<4;i++) {
        for(int j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Matrix::\n");
    print(a);
    for(int i=0;i<4;i++)
        leftShift2(a[i]);
    printf("\nLeft shifted matrix::\n");
    print(a);
    return 0;
}