#include<stdio.h>
void getCircularShift(int* x, int* y, int* z) {
    int temp=*x;
    *x=*z;
    *z=*y;
    *y=temp;
    printf("%d  %d  %d",*x,*y,*z);
}
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    getCircularShift(&x,&y,&z);
    return 0;
}