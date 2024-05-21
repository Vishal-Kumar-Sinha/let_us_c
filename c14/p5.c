#include<stdio.h>
#include<stdbool.h>
void print(int (*m)[50], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            printf("%d",m[i][j]);
        printf("\n");
    }
}
void getTranspose(int (*t)[50],int (*m)[50], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            t[i][j]=m[j][i];
    }
    printf("\nTranspose::\n");
    print(t,n);
}
bool checkSymmetric(int (*t)[50],int (*m)[50], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(t[i][j]!=m[i][j])
                return false;
        }
    }
    return true;
}
int main() {
    int n;
    scanf("%d",&n);
    int m[50][50], t[50][50];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            scanf("%d",&m[i][j]);
    }
    printf("\nMatrix::\n");
    print(m,n);
    getTranspose(t,m,n);
    if(checkSymmetric(t,m,n))
        printf("\nSymmetric\n");
    else
        printf("\nNot symmetric\n");
    return 0;
}