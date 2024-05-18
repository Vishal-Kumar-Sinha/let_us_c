#include<stdio.h>
#include<math.h>
int getDecimal(int n) {
    if(n==0||n==1) return n;
    else {
        int b=1, c=0;
        while(n!=0) {
            b+=((n%2)*pow(10,c++));
            n/=2;
        }
        return b;
    }
}
int getDecimalRecursive(int n) {
    if(n==0||n==1) return n;
    else return(n%2+(10*getDecimalRecursive(n/2)));
}
int main() {
    int num;
    scanf("%d",&num);
    if(num<0)
        printf("Negative number");
    else {
        printf("Recursive:: %d",getDecimalRecursive(num));
        printf("\nIterative:: %d",getDecimal(num));
    }
    return 0;
}