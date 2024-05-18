#include<stdio.h>
void game(int n, char A, char B, char C) {
    if(n==1) {
        printf("Move Disk %d from %c to %c\n",n,A,C);
        return;
    }
    game(n-1,A,C,B);
    printf("Move Disk %d from %c to %c\n",n,A,C);
    game(n-1,B,A,C);
}
int main() {
    game(4,'A','B','C');
    return 0;
}