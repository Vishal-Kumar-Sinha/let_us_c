#include<stdio.h>
#define M 50
void print(int (*m1)[M], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            printf("%d",m1[i][j]);
        printf("\n");
    }
}
void multiplyMatrix(int (*m1)[M], int (*m2)[M], int n) {
    int mul[M][M];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            mul[i][j]=0;
            for(int k=0;k<n;k++)
                mul[i][j]+=m1[i][k]+m2[k][j];
        }
    }
    printf("\nMultiplied matrix::\n");
    print(mul,n);
}

int main() {
    int n;
    int m1[M][M], m1[M][M];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            scanf("%d",&m1[i][j]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            scanf("%d",&m1[i][j]);
    }
    printf("\nMatrix 1::\n");
    print(m1,n);
    printf("\nMatrix 2::\n");
    print(m1,n);
    multiplyMatrix(m1,m2,n);
    return 0;
}