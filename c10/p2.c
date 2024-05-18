#include<stdio.h>
int getSum(int n) {
    if(n<=0) return 0;
    else return(n+getSum(n-1));
}
int main() {
    printf("%d", getSum(25));
    return 0;
}