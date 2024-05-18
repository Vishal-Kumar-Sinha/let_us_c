#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n) {
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0)
            return false;
    }
    return true;
}
void getFactors(int num) {
    int i=2;
    int* factors;
    while(num>1) {
        while(isPrime(i) && num%i==0) {
            num/=i;
            printf("%d  ",i);
        }
        i++;
    }
}
int main() {
    int num;
    scanf("%d", &num);
    if(num>0) getFactors(num);
    else printf("Invalid number");
    return 0;
}