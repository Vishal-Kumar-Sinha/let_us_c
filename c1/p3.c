/*
Paper  of  size  A0  has  dimensions  1189  mm  x  841  mm.  Each 
subsequent size A(n) is defined as A(n-1) cut in half, parallel to its 
shorter sides. Thus, paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, ... A8.
*/
#include<stdio.h>
void getPaper(int l,int b) {
    int i=0, temp=0;
    while(i<9) {
        printf("A%d => %d mm x %d mm\n",i,l,b);
        temp=l/2;
        l=b;
        b=temp;
        i++;
    }
}
int main() {
    int l=1189, b=841;
    getPaper(l,b);
    return 0;
}